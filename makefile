CC = devkitARM/bin/arm-none-eabi-g++
CFLAGS = -g -Wall -O2

all: ForumD.3dsx

ForumD.3dsx: main.o menu.o gfx.o user.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.cpp menu.h
	$(CC) $(CFLAGS) -c $<

menu.o: menu.cpp menu.h
	$(CC) $(CFLAGS) -c $<

gfx.o: gfx.cpp gfx.h
	$(CC) $(CFLAGS) -c $<

user.o: user.cpp user.h
	$(CC) $(CFLAGS) -c $<