//week14-5
#include <iostream>
using namespace std;
int main(){
	int a,b; //Step01: input
	while(cin >>a >>b){
		int bad=0, backup=a;
		if(b==1){
			cout<<"Boring!\n";
			continue; // Step06
		}
		while(a>0){ //Step03
			//cout << a<< " ";
			if(a!=1 && a%b>0)bad=1;
			a=a/b;
		}
		if(bad==1)cout << "Boring!\n";
		else{
			a=backup; // Step04
			while(a>1){ // Step05
				cout << a<< " ";
				a=a/b;
			}
			cout<<"1\n";
		}
	}//Step02: output
}