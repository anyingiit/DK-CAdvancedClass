//
// Created by AnYing on 2021/3/14.
//

#include <iostream>

using namespace std;


int monkey_1(int day, int initPeach){
    for (int i = 0; i < day - 1; i++) {
        initPeach += 1;
        initPeach *= 2;
        cout << "第" << day - 1 -  i << "天剩余:" << initPeach << "个桃子" << endl;
    }
    return initPeach;
}

int monkey_2(int day){
    if (day == 10){
        return 1;
    }
    int peach = (monkey_2(day + 1) + 1) * 2;
    cout << "第" << day << "天剩余:" << peach << "个桃子" << endl;
    return peach;
}
int main(){
    int peach = 1;
    int day = 10;
    monkey_1(day, peach);
    cout << "========================" << endl;
    monkey_2(1);

}
