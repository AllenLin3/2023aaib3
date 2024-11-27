///week12-1.cpp 學習資料結構的 struct vs. class
#include <iostream>
#include <string> ///為了Cat的名字
using namespace std;
///struct Node{};///都有分號結尾，C語言的結構
///class Cat{};///之前幾週，都教過，更強大
struct Node{
    int val;
};
class Cat{
public:
    string name;
};

int main(){
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
