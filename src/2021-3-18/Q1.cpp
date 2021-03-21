//
// Created by AnYing on 2021/3/18.
//

#include <iostream>

using namespace std;

int main(){
    int xLen;
    int height;
    scanf("%d %d", &xLen, &height);
    int width = xLen + height - 1;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j >= i && j < xLen + i || j >= width - xLen - i && j < width - i){
                cout << "*";
            } else{
                cout << ".";
            }
        }
        cout << endl;
    }
}