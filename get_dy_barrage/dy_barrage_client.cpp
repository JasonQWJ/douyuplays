/*
 *  COPYRIGHT NOTICE
 *  Copyright (c) 2015, Douyu Network Technology Co., Ltd. in Wuhan
 *  All rights reserved.
 *
 *  @version : 1.0
 *  @author : mxl
 *  @E-mail：xiaolongicx@gmail.com
 *  @date : 2015/5/19
 *
 *  Revision Notes :
*/
#include "stdafx.h"
#include "data_def.h"
#include "dy_barrage_client.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>

#ifdef _MSC_VER
#include <windows.h>
#pragma comment(lib, "ws2_32.lib")

#else
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>
#endif

using namespace std;

#define MAX_DATA_SIZE 40960   //maximum length(bytes) of each reception

dy_barrage_client::dy_barrage_client()
{
}

dy_barrage_client::~dy_barrage_client()
{
}

int dy_barrage_client::connect_dy_server(const char *host_p, int port)
{
	struct hostent *host;

#ifdef _MSC_VER
	unsigned long lgIP = inet_addr(host_p);
	//输入的IP字符串
	if(lgIP != INADDR_NONE)
	{
		WSACleanup();
		return -1;
	}
	WSADATA wsaData;
	WSAStartup(MAKEWORD(1,1),&wsaData);
#endif

	host = gethostbyname(host_p);
	if(host == NULL)
	{
		cout << "gethostbyname err, host is" << host_p << endl;
		return -1;
	}

	sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(sock_fd == -1)
    {
        cout << "create socket failed!" << endl;
        return -1;
    }

	struct sockaddr_in serv_addr;
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    serv_addr.sin_addr = *((struct in_addr *)host->h_addr);
    //bzero(&(serv_addr.sin_zero), 8);
	memset(serv_addr.sin_zero, 0, 8);

    int con_ret = connect(sock_fd, (struct sockaddr *)&serv_addr, sizeof(struct sockaddr));
    if(con_ret == -1)
    {
        cout << "connect server " << host_p << ":" << port << " err!" << endl;
        return -1;
    }
    else
    {
        cout << "connect server " << host_p << ":" << port << " ok" << endl;
    }
    return 0;
}

int dy_barrage_client::login_dy_room()
{
    int ret = 0;
    dy_login_req login_req;
    string data = login_req.transform_to_dy_string();

    //cout << data << endl;

    ret = send(sock_fd, data.data(), data.size(), 0);
    if(ret == -1)
    {
        cout << "send login request err: " << ret << endl;
    }
    else
    {
        cout << "send login request ok" << endl;
    }

    // receive login response
    get_dy_server_msg();

    return 0;
}

int dy_barrage_client::join_dy_room_group(int room_id, int group_id)
{
    int ret = 0;

    dy_join_group_req join_req(room_id, group_id);

    string data = join_req.transform_to_dy_string();

    ret = send(sock_fd, data.data(), data.size(), 0);
    if(ret == -1)
    {
        cout << "send join group request err: " << ret << endl;
    }
    else
    {
        cout << "send join group ok" << endl;
    }

    return 0;
}

void dy_barrage_client::get_dy_server_msg()
{
    int packet_length = 0;
    // get the packet length 4 bytes
    int recv_bytes = recv(sock_fd, reinterpret_cast<char *>(&packet_length), 4, 0);
    if (recv_bytes == -1)
    {
        cout << "receive server message err!" << endl;
        return;
    }

    if (packet_length <= 8)
    {
        return;
    }

    // get the packet body packet_length bytes
    char buf[MAX_DATA_SIZE] = {0};
    recv_bytes = recv(sock_fd, buf, packet_length, 0);
    if(recv_bytes == -1)
    {
        cout << "receive server message err!" << endl;
        return;
    }
    else
    {
        //you should better paste the packet as douyu packet header length, if not something unpredictable may happen
        string pack_data(buf, recv_bytes);
        int msg_type = get_dy_msg_type(pack_data);
        switch(msg_type)
        {
            case MSG_TYPE_LOGIN_RESPONSE:
                on_login_response(pack_data);
                break;
            case MSG_TYPE_BARRAGE:
                on_barrage(pack_data);
                break;
            // deal other server message as you need here
            default:
                break;
        }
    }
}

void dy_barrage_client::keep_alive()
{
#ifdef _MSC_VER
	dy_keep_alive_req keepl_req(GetTickCount());
#else
	dy_keep_alive_req keepl_req(time(NULL));
#endif


    string data = keepl_req.transform_to_dy_string();

    int ret = send(sock_fd, data.data(), data.size(), 0);
    if(ret == -1)
    {
        cout << "send keep alive request err: " << ret << endl;
    }


}

void dy_barrage_client::on_barrage(string data)
{

    dy_barrage_res barr_res;
    barr_res.parse_from_dy_string(data);
	string content = barr_res.content;
	if (content.find("!", 0))
	{
		cout << barr_res.sender_name << ": " << barr_res.content << endl;
	}
	else
	{

		cout << barr_res.sender_name << string("发送了指令: ") << barr_res.content << endl;
	}
}

void dy_barrage_client::on_login_response(string data)
{

    dy_login_res login_res;
    login_res.parse_from_dy_string(data);

    if (0 == login_res.ret)
    {
        cout << "login successfully" << endl;
    }
    else
    {
        cout << "login err: " << login_res.ret << endl;
    }
}
