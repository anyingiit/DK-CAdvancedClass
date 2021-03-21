//
// Created by AnYing on 2021/3/11.
//

#include <iostream>
#include <random>

using namespace std;
default_random_engine e;
uniform_int_distribution<unsigned> u(0, 100);


float average(int *input, int len){
    float result = 0;
    for (int i = 0; i < len; i++) {
        result += input[i];
    }
    result /= len;
    return result;
}


void pointerAbout(int *aClass,int aClassSize, int *bClass, int bClassSize, int **target, int *targetLen){
    if (average(aClass, aClassSize) > average(bClass, bClassSize)){
        *target = aClass;
        *targetLen = aClassSize;
        return;
    }
    *target = bClass;
    *targetLen = bClassSize;
}





int main(){
    int aClassStudentSum = 6;
    int bClassStudentSum = 5;
    int *aClass = new int [aClassStudentSum];
    int *bClass = new int [bClassStudentSum];
    cout << "开始输入甲班成绩..." << endl;
    for (int i = 0; i < aClassStudentSum; i++) {
        cout << "请输入甲班第" << i + 1 << "个学生的成绩:";
        cin >> aClass[i];
    }
    cout << "开始输入乙班成绩..." << endl;
    for (int i = 0; i < bClassStudentSum; i++) {
        cout << "请输入乙班第" << i + 1 << "个学生的成绩:";
        cin >> bClass[i];
    }
    int **result = new int *[1];
    int resultLen;
    pointerAbout(aClass, aClassStudentSum, bClass, bClassStudentSum, result, &resultLen);
    for (int i = 0; i < resultLen; i++) {
        cout << result[0][i] << "\t";
    }
    cout << endl;
}