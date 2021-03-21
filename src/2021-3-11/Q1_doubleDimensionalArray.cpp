//
// Created by AnYing on 2021/3/11.
//
#include <iostream>
#include <random>

using namespace std;
default_random_engine e;
uniform_int_distribution<unsigned> u(0, 9);


int** doubleDimensionalArray(int **input, int rowNum, int columnNum){
    int **result = new int *[columnNum];
    for (int i = 0; i < columnNum; i++) {
        result[i] = new int [rowNum];
    }
    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < columnNum; j++) {
            result[j][i] = input[i][j];
        }
    }
    return result;
}


int main(){
    int row = 2;
    int column = 3;
    int **input = new int *[row];
    for (int i = 0; i < 2; i++) {
        input[i] = new int [column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            input[i][j] = u(e);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << input[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int **result = doubleDimensionalArray(input, row, column);
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

