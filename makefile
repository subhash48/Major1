# Makefile for the bitwise operation menu
# Author: Subhash Galla, Murali Sai Vejendla, Mario Nolasco Cortez, Rome Hatsushiba
# CSCE 3600 - Systems Programming
# Date: Oct 29th, 2024

CC = gcc
CFLAGS = -Wall
TARGET = binops

all: $(TARGET)

$(TARGET): major1.o replace.o power.o palindrome.o reverse.o
	$(CC) $(CFLAGS) -o $(TARGET) major1.o replace.o power.o palindrome.o reverse.o

major1.o: major1.c major1.h
	$(CC) $(CFLAGS) -c major1.c

replace.o: replace.c major1.h
	$(CC) $(CFLAGS) -c replace.c

power.o: power.c major1.h
	$(CC) $(CFLAGS) -c power.c

palindrome.o: palindrome.c major1.h
	$(CC) $(CFLAGS) -c palindrome.c

reverse.o: reverse.c major1.h
	$(CC) $(CFLAGS) -c reverse.c

clean:
	rm -f *.o $(TARGET)
