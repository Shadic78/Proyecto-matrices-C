//
// Created by alerammoo on 01/11/2020.
//
#include "MatrixGenerator.h"
#include "MatrixMultiplication.h"

int** matrixMultiplication(int** matrixA, int** matrixB, int matrixNumRows, int matrixNumColumns) {
    int** matrixResult = createMatrix(matrixNumRows, matrixNumColumns);

    for (int rowIndex = 0; rowIndex < matrixNumRows; rowIndex++) {
        for (int columnIndex = 0; columnIndex < matrixNumColumnss; columnIndex++) {
            for(int helper = 0; helper<matrixNumRows; helper++){
                matrixResult = matrixA[rowIndex][columnIndex] * matrixB[rowIndex][columnIndex];
            }
        }
    }

    return matrixResult;
}

