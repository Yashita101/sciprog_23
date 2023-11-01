#include<stdio.h>

int main()
{
    //Initializing variables
    int n=5, p=3, q=4;

    /* These are static arrays, and their size cannot be changed
    They are saved in the stacks, and hence don't take alot of memory
    Dynamic arrays will be saved in the heaps */
    double A[n][p], B[p][q], C[n][q];
    int i, j, k; //Loop indices

    //Initialise A, B and C matrices 
    for(i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            A[i][j]=i+j; //Matrix A initialized to i+j
        }
    } 
    
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            B[i][j]=i-j;  //Matrix B initialized to i-j
        }
    }
    
    for (i=0; i<n; i++)
    {
        for(j=0; j<q; j++)
        {
            C[i][j]=0.0;  // Matrix C initialized to 0.0 as it is double precision
        }
    }
    
    //Matrix Multiplication performed
    for (i=0; i<n; i++)
    { 
    	for(j=0; j<q; j++)
	    { 
    		for (k=0; k<p; k++)
    		{ 
    	        C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }

    //Printing Matrices
    printf("\nMatrix A:\n"); 
    for (i=0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    } 
    
    printf("\nMatrix B:\n"); 
    for (i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%3.0f ", B[i][j]);
        } 
        printf("\n");
    }
    
    printf("\nMatrix C:\n"); 
    for (i=0; i<n; i++)
    {
        for (j=0; j<q; j++) 
        {
            printf("%3.0f ",C[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}