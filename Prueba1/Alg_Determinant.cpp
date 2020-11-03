#include "Alg_Determinant.h"
#include <cmath>

t_matrix_value determinant(t_matrix matrixA, t_matrix_value matrixOrder, int matrixNumRows, int matrixNumCol){
    int determinantValue = 0;
    if(matrixOrder==1){
        determinantValue = matrix[0][0];
    }else{

        for(int colIndex=0; colIndex<matrixOrder; colIndex++){
            determinantValue = determinantValue + matrixOrder[0][colIndex]
                    * matrixCofactor(matrix, matrixOrder, 0, colIndex, int matrixNumRows, int matrixNumCol);

        }
    }

    return determinantValue;
}

int cofactor(t_matrix matrixA, t_matrix_value matrixOrder, int row, int column, int matrixNumRows, int matrixNumCol){
   t_matrix_value matrixB = createMatrix( matrixNumRows, matrixNumCol);
    int pivot = matrixOrder - 1;
    int rowIndexB;
    int colIndexB;

    for(int rowIndex=0; rowIndex<matrixOrder; rowIndex++){
        for(int colIndex=0; colIndex<matrixOrder; colIndex++){
            if( rowIndex != row && colIndex != column){
                matrixB[rowIndexB][colIndexB] = matrixA[rowIndex][colIndex];
                colIndexB++;
                if(colIndexB >= pivot){
                    rowIndex++;
                    colIndexB = 0;
                }
            }
        }
    }

    return pow(-1.0, row+ column*determinant(matrixB, pivot));

}