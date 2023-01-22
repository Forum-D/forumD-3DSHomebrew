CC=devkitpro-gcc

CFLAGS=-std=gnu99 -Wall -O2 -march=armv6k -mtune=mpcore -mfloat-abi=hard

OBJ=main.o gfx.o menu.o user.o

forumD.3ds : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o forumD.3ds

forumD.3dsx : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o forumD.3dsx

main.o : main.cpp
	$(CC) $(CFLAGS) -c main.cpp

gfx.o : gfx.cpp
	$(CC) $(CFLAGS) -c gfx.cpp

menu.o : menu.cpp
	$(CC) $(CFLAGS) -c menu.cpp

user.o : user.cpp
	$(CC) $(CFLAGS) -c user.cpp

forumD.cia : forumD.3ds
	3dstool -cvtf cia forumD.3ds forumD.cia

clean:
	rm -f *.o forumD.3ds forumD.3dsx forumD.cia