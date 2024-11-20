///week11-1.cpp
///不能直接使用Codeblocks，因為是C++
///Setting-compiler,加入c++11就可以
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> table;
    table[9977341]= 9;
    table[4433997]= 4;
    cout<<table[9977341]<<"\n";
    cout<<table[4433997]<<"\n";
}
