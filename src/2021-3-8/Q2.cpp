//
// Created by AnYing on 2021/3/11.
//

#include <iostream>

using namespace std;

int main(){
    int inputNum;
    cout << "请输入四位数字:";
    cin >> inputNum;
    int a, b, c, d;
    a = inputNum / 1000;
    b = inputNum % 1000 / 100;
    c = inputNum % 100 / 10;
    d = inputNum % 10;
    cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
    cout << "结果:" << a * a + b * b + c * c + d * d << endl;
}