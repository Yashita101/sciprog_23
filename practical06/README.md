# Week 6 Practical

This week practical files are added in this folder.
This folder contains the following program.

1. Matrix Multiplication

Use GCC Compiler to compile and execute the code.

The code is complied and executed using VSCode on a mac machine.

For Step 1 to 5:

    gcc matrix_multiplication.c -o matrix_multiplication.c

    ./matrix_multiplication

In step6_main folder, with the main file:
main.c consists the main body of the code where the matrices are initialized and printed.
matrix_multiplication.c consists strictly of the function doing the multiplicaiton on the initialized matrices.

    gcc -c main.c

    gcc -c matrix_multiplication.c

    gcc -o  matrix_multiplication main.o matrix_multiplication.o

    ./matrix_multiplication



To Run these Programs in linux machine:

Run the Make File

    make clean

    ./matmultc