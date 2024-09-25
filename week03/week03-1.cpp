///week03-1.cpp 考使題目:除惡務盡，但無法執行
///因為range-based for 迴圈必須在C++(2011之後)才能使用
///如果使用C++98(1988年版C++)會無法正確編譯，執行會出錯，迴圈出不來
///Codeblocks 17.12 裡 Setting-Compiler 勾選第2個-std=c++11
#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(char c: s){
        if(c!='2')cout<< c ;
	}
    return 0;
}
