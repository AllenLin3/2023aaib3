#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    int now;
    while(cin>>now){
        a.push_back(now);
        cout<<now<<"\n";
    }///小黑輸入Ctrl+Z+enter，結束全部
}
