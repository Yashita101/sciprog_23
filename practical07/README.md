# Week 7 Practical

This week practical files are added in this folder.
This folder contains the following programs.

1. Dynamic Memory Allocation
2. Taylor Series

Use GCC Compiler to compile and execute the code.

The code is complied and executed using VSCode on a mac machine.

To Run these Programs in linux machine:

For Question 1 :

    Compile using following command

    gcc DynamicAlloc.c -o DynamicAlloc.c -lm

    Print the Output using this command

    ./DynamicAlloc.c

    (-lm is to map math library to the gcc)
On compiling, it will prompt the user to enter the size of the array, following which it will give an output array of mentioned size, and it will fill it with ones. It shows the dynamic allocation of the array based on user input.

For Question 2 :

    Compile using following command

    gcc TaylorSeries.c -o TaylorSeries.c -lm

    Print the Output using this command

    ./TaylorSeries.c

    (-lm is to map math library to the gcc)
On compiling, it will prompt user to enter the level of precision or order of polynomial of taylors series to use after that it will print an output of the value of sum of taylors series for x = 1. therefore calculates the value of e. It also prints the difference between the real value of e and the one calculated using Taylors Series.