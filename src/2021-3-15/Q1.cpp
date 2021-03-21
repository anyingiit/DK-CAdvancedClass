//
// Created by AnYing on 2021/3/14.
//

#include <iostream>

using namespace std;

int main(){
    int height;
    cout << "ÇëÊäÈë¸ß¶È:";
    cin >> height;
    int baseSpaceLen = 4;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < baseSpaceLen; j++) {
            printf(" ");
        }
        for (int j = 0; j < height - 1 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (i + 1) * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}