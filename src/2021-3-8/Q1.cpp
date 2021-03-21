//
// Created by AnYing on 2021/3/11.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    int num = 0, cLetter = 0, lowLetter = 0;
    string input;
    cout << "开始输入字符:";
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 65 && input[i] <= 90){
            cLetter++;
        } else if (input[i] >= 97 && input[i] <= 122){
            lowLetter++;
        } else if (input[i] >= 48 && input[i] <= 57){
            num++;
        }
    }
    cout << "数字的个数:" << num << endl;
    cout << "大写字母的个数" << cLetter << endl;
    cout << "小写字母的个数" << lowLetter << endl;
    return 0;
}