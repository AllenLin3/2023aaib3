///week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string> ///���FCat���W�r
using namespace std;
///struct Node{};///�������������AC�y�������c
///class Cat{};///���e�X�g�A���йL�A��j�j
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
