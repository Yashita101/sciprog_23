#include <stdio.h>
// // // Checks if a matrix is a magic square.
// // // A magic square is an n-sided matrix whose sum of values for each
// // // row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// // // The function takes as input a matrix 'square' and its side length 'n'
// // // and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// // // otherwise, outputs a non-zero value

// // // ".h" file because this will be included into the main
// // // 1D array is a pointer *
// // // 2D array is a pointer to a pointer **


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;
    printf("M=%d\n", M);

    int i, j;
    // Checking that every row and column add up to M
    for (i=0;i<n;i++){
        int rowSum=0;
        int colSum=0;
        for(j=0;j<n;j++){
            rowSum+=square[i][j];
            colSum+=square[j][i];
        }
        printf("i=%d, rowSum=%d, colSum=%d\n", i, rowSum, colSum);
        if (rowSum != M || colSum != M){
            return 0;
        }
    }

    // Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square
    int diag_sum = 0;
    int off_diag_sum = 0;
    for (i=0;i<n;i++){
        diag_sum += square[i][i];
        off_diag_sum += square[i][n-i-1];
    }
    printf("Diagonal Sum=%d, Off Diagonal Sum=%d \n", diag_sum, off_diag_sum);
    if (diag_sum != M || off_diag_sum != M){
        return 0;
    }

    // If all checks are passed, then it would be a magic square
    return 1;
}