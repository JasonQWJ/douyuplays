CXXFLAGS=-g

bin = get_dy_barrage
objs = get_dy_barrage.o dy_barrage_client.o data_def.o dy_encoder.o

$(bin): $(objs)
	g++ -o $(bin) $(objs) -lpthread

.phony: clean

clean:
	rm $(objs) $(bin)
