/*
 _       _
| 1  0  0 |
| 0  1  0 |         DataType Array_Name [row][column];
|_0  0  1_|     

int MatrixA [3][3]; -> capacity : 3*3 = 9 data
int MatrixB [2][4]; -> capacity : 2*4 = 8 data

float std_cgpa[6][8];  capacity : 6*8 = 48 data
 
int x [2][3] = {11,12,13,21,22,23}  printf("%d", x[0][3]); -> output
or, = 
{
    {11,12,13},
    {21,22,23}
};

int matrixA [2][3];
matrixA[0][0] = 7;
matrixA[1][2] = 8;

matrixA[1][0] = matrixA[0][0] + matrixA[1][2];

now,
    matrixA =
    {
        { 7, 0, 0},
        {15, 0, 8}
    };


*/

/*Traversing 2D Array*/

#include<stdio.h>
#include<string.h>

int main(){
    int matrix[2][3] =
    {
        {11,12,13},
        {21,22,23}
    }, i,j;

    for(i=0; i<2; i++){  //loop for row
        for(j=0; j<3; j++){ // loop for column
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }    

    return 0;
}