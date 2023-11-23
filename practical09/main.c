
#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100

//read in a file, convert it into an array and then use the function
int get_num_lines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter file name : "); 
    scanf("%s",filename);
    
    // n function which gets the number of lines
    int n = get_num_lines(filename);

    f = fopen(filename, "r");

    if(f==NULL) {
        printf("!! Can't Open File !!\n");
        exit(1);
    }

    int i;
    // Defining a pointer to a pointer of an array hence,
    // allocating a matrix for storing the magic square, sizeof (int *)
    // Each pointer is a row
    int **magicsquare = malloc((n)*sizeof(int *));
    for (i = 0; i < n; i++)
    {
        magicsquare[i] = malloc(n*sizeof(int));
    }

    // Input of integer data into the matrix
    int j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fscanf(f,"%d",&magicsquare[i][j]);
            printf("%d\t",magicsquare[i][j]);
        }
        printf("\n");
    }

    printf("This square %s\n", isMagicSquare(magicsquare, n)? "is a Magic Square." : "is NOT a Magic Square.");

    // Freeing each row separately before freeing the array of pointers
    for (i=0;i<n;i++){
        free(magicsquare[i]);
    }
    free(magicsquare);

    // Closing the file
    fclose(f);

    return 0;
}

int get_num_lines(char filename[MAX_FILE_NAME])
{ 
    FILE *fp;
    fp = fopen(filename,"r"); // Open the file

    int ch_read;
    int count = 0;

    // EOF when we are done reading the file, reached end of file
    while((ch_read = fgetc(fp)) != EOF) 
    {
        if(ch_read == '\n')
        { 
            count++;
        }
    }

    printf("Number of lines: %d\n",count);
    fclose(fp); 
    return count;
}
