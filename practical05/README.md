# Week 5 Practical

This week practical files are added in this folder.
This folder contains the following programs.

1. Fibonacci
2. Hypertan

Use GCC Compiler to compile and execute the code.

The code is complied and executed using VSCode on a mac machine.

To Run these Programs in linux machine:

For Question 1 :

    Compile using following command

    gcc Fibonacci.c -o Fibonacci.c

    Print the Output using this command

    ./Fibonacci.c
After running the code, it will ask you to enter a number, say x and it will print out the first x digits of the Fibonacci Sequence.

For Question 2 :

    Compile using following command

    gcc HyperTan_Inv.c -o HyperTan_Inv.c -lm

    Print the Output using this command

    ./HyperTan_Inv.c

    (-lm is to map math library to the gcc)
The code will print the hyperbolic arc tangent using the Maclaurin series, and using natural logarithms It will also print the difference between the two answers, significant to 10 figures.