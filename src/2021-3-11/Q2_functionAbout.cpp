//
// Created by AnYing on 2021/3/11.
//

#include <iostream>
#include <random>

using namespace std;
default_random_engine e;
uniform_int_distribution<unsigned> u(0, 100);

//int functionAbout(int **input, int teamNum, int studentNum){
//    int result = 0;
//    for (int i = 0; i < teamNum; i++) {
//        for (int j = 0; j < studentNum; j++) {
//            result += input[i][j];
//        }
//    }
//    result /= teamNum * studentNum;
//    return result;
//}


float functionAbout(int *input, int len){
    float result = 0;
    for (int i = 0; i < len; i++) {
        result += input[i];
    }
    result /= len;
    return result;
}


int main(){
    int team = 3;
    int student = 5;
    int **input = new int *[3];
    for (int i = 0; i < team; i++) {
        input[i] = new int [student];
    }
    for (int i = 0; i < team; i++) {
        for (int j = 0; j < student; j++) {
            input[i][j] = u(e);
        }
    }
    for (int i = 0; i < team; i++) {
        cout << "team: " << i+1 << "\t" << "average: " << functionAbout(input[i], student) <<endl;
        for (int j = 0; j < student; j++) {
            cout <<input[i][j] << "\t";
        }
        cout << endl;
    }
}