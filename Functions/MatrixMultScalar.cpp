//
// Created by alerammoo on 01/11/2020.

#include "MatrixGenerator.h"
#include "MatrixMultscalar.h"

int** multiplication(int** matrix[20][20], int matrixNumRows, int matrixNumColumns, int scalar){
    int** matrixResult = createMatrix(matrixNumRows, matrixNumColumns);

    for(int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
        for(int columnsIndex = 0; columnsIndex<matrixNumColumns; columnsIndex++){
            matrixResult[rowsIndex][columnsIndex] = scalar * matrix[rowsIndex][columnsIndex];
        }
    }

    return matrixResult;
}