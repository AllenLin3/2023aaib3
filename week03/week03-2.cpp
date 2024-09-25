///week03-2.cpp 想了解字串string，字元chsr的差別
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    printf("%d\n",'a');///單引號代表1個字母，會對應1個數值
    printf("%d\n","a");///雙引號代表很多個字母(字串)
    if('a'==97)printf("其實'a'是數值 97\n");
}
