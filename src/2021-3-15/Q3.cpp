//
// Created by AnYing on 2021/3/14.
//

#include <iostream>
#include <string>

using namespace std;


int cube(int num){
    return  num * num * num;
}

long long int exp(int x, int y){
    long long int result = x;
    for (int i = 1; i < y; i++) {
        result *= x;
    }
    return result;
}

bool isNarcissisticNum(long long int num){
    string numStr = to_string(num);
    long long int temp = 0;
    for (int i = 0; i < numStr.length(); i++) {
//        cout << numStr[i] << "->" << (int)(numStr[i] - '0') << endl;
//        temp += cube((int)(numStr[i] - '0'));
        temp += exp((int)(numStr[i] - '0'), numStr.length());
    }
//    cout << temp << endl;
    return num == temp;
}

int main(){
    int max = 3;
    for (long long int i = 100; i < LLONG_MAX; i++) {
//        if (i % 10000 == 0){
//            cout << i << endl;
//        }
        if (to_string(i).length() == max + 1){
            break;
        }
        if (isNarcissisticNum(i)){
            cout << i << endl;
        }
    }
}
