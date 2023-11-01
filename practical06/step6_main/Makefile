CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: matmultc

matmultc: main.o matrix_multiplication.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o matmultc main.o matrix_multiplication.o $(LDFLAGS) 

matmult.o: matrix_multiplication.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) matrix_multiplication.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o