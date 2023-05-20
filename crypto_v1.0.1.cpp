#include<iostream>
using namespace std;

template<typename C_OP>
void choice(C_OP &userChoice){
	if(userChoice == 'S' || userChoice == 's'){
		cout<<"Okay!"<<endl;
	}
		else if(userChoice == 1 || userChoice == 2) {
			cout<<"Fine"<<endl;
		}
}
int main (){ 
  auto ch;
	cout<<"INPUT >>: "<<endl;
		cin.get();
		choice(ch);

	return 0;
}
