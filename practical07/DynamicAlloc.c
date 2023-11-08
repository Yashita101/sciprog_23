#include <stdio.h>
#include <stdlib.h>

// Function for array allocation
int *allocate_arr(int n){
    // integer as input and pointer as output malloc
    int *p;
    p=(int *) malloc(n*sizeof(int));

    // Deal with any errors
    if(p==NULL) 
    {
        printf("Error\n");
    }
    return p;
}

// Fill with ones : takes array and array size as input
void fillwithones(int *array, int n){
    int i;
    for (i=0;i<n;i++){
        array[i] = 1;
    }
}

//Print the array
void printarray(int *array, int n){
    int i;
    for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,array[i]);
    }
}

// Free allocated space in the array
void freearray(int *array){
    free(array);
}


int main()
{
    int length, *a;
    printf("\nEnter the Size of the array: \n");
    scanf("%d",&length);

    a = allocate_arr(length);
    fillwithones(a,length);
    printarray(a,length);
    freearray(a);
    
    // Allocating NULL Value to Array
    a=NULL;
    
    return 0;
}