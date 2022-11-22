CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: Matmult 

Matmult: main.o Matmult.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o Matmult main.o Matmult.o $(LDFLAGS)     

Matmult.o: Matmult.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) Matmult.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o
