//
// Created by AnYing on 2021/3/14.
//

#include <iostream>

using namespace std;

int main(){
    float result = 0;
    int a = 1;
    int b = 2;
    int temp;
    for (int i = 0; i < 20; i++) {
        result += (float)b / (float)a;
        temp = a;
        a = b;
        b += temp;
    }
    cout << result << endl;
}
