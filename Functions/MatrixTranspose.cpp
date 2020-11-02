//
// Created by alerammoo on 01/11/2020.
//
#include "MatrixGenerator.h"
#include "MatrixTranspose.h"

int** transpose(int** matrixA, int matrixNumRows, int matrixNumColumns){
    int** matrixResult = createMatrix(matrixNumRows, matrixNumColumns);
    for(int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
        for(int columnsIndex = 0; columnsIndex<matrixNumColumns; columnsIndex++){
            matrixResult[columnsIndex][rowsIndex] = matrixA[rowsIndex][columnsIndex];
        }
    }
    return matrixResult;
}


