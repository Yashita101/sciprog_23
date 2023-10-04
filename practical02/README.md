# Week 2 Practical

This week practical files are added in this folder.
This folder contains two programs in C program:

1. Conversion
2. Sum of Series

Use GCC Compiler to compile and execute the code.

The code is complied and executed using VSCode on a mac machine.

To Run this Program in linux machine:

Compile using following command

For Question 1 :

    gcc Conversion.c -o Conversion.c -lm -Wall

    Print the Output using this command

    ./Conversion.c

    (-lm is to map math library to the gcc; -Wall is to show all the warnings, just in case)
The expected output is the integer number and it's binary converted representation.


For Question 2 :

    gcc Sum.c -o Sum.c -Wall

    Print the Output using this command

    ./Sum.c

    (-Wall is to show all the warnings, just in case)

The expected output is the difference between two sums calculated differently. The first sum is calculated using an incremental loop, and the second using a decremental one.