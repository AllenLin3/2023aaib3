///week03-1.cpp �Ҩ��D��:���c�ȺɡA���L�k����
///�]��range-based for �j�饲���bC++(2011����)�~��ϥ�
///�p�G�ϥ�C++98(1988�~��C++)�|�L�k���T�sĶ�A����|�X���A�j��X����
///Codeblocks 17.12 �� Setting-Compiler �Ŀ��2��-std=c++11
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
