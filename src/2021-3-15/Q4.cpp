//
// Created by AnYing on 2021/3/14.
//

#include <iostream>
#include "../tool/MyArray.h"

using namespace std;


Array<int> getDivisor(int num){
    Array<int> result;
    for (int i = 1; i <= num - 1; i++) {
        if (num % i == 0){
            result.addLast(i);
        }
    }
    return result;
}

bool isPerfectNumber(int num, Array<int> *divisor){
    int temp = 0;
    for (int i = 0; i < divisor->getSize(); i++) {
        temp += divisor->get(i);
    }
    return num == temp;
}

string ArrayIntToFormatStr(Array<int> *data){
    string result;
    for (int j = 0; j < data->getSize(); j++) {
        result.append(to_string(data->get(j)));
        if (j != data->getSize() - 1){
            result.append(", ");
        }
    }
    return result;
}

int main(){
    Array<int> divisor;
    for (int i = 1; i <= 1000; i++) {
        divisor = getDivisor(i);
        if (isPerfectNumber(i, &divisor)){
            cout << i << "的因子是:" << ArrayIntToFormatStr(&divisor) << endl;
//            for (int j = 0; j < divisor.getSize(); j++) {
//                cout << divisor.get(j);
//                if (j != divisor.getSize() - 1){
//                    cout << ", ";
//                }
//            }
//            cout << endl;
        }
    }
}
