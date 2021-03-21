//
// Created by AnYing on 2021/3/13.
//

#include <iostream>


using namespace std;

int main(){
    char s1[80];
    char s2[80];
    cout << "ÇëÊäÈës1:";
    cin >> s1;
    cout << "ÇëÊäÈës2:";
    cin >> s2;
    int s1Len = 0;
    while (s1[s1Len] != '\0'){
        s1Len++;
    }
    int s2Len = 0;
    while (s2[s2Len] != '\0'){
        s2Len++;
    }
    bool isSame;
    for (int i = 0; i < s1Len; i++) {
        if (s1[i] == s2[0]){
            isSame = true;
            for (int j = 0; j < s2Len; j++) {
                if (s1[i + j] != s2[j]){
                    i += j;
                    isSame = false;
                    break;
                }
            }
            if (isSame){
                for (int j = 0; j < s1Len - s2Len; j++) {
                    s1[i + j] = s1[i + s2Len + j];
                    s1[i + s2Len + j] = '\0';
                }
                i += s2Len;
                s1Len -= s2Len;
            }
        }
    }
    cout << "É¾³ýs2ºós1×Ö·û´®:" << s1 << endl;
}