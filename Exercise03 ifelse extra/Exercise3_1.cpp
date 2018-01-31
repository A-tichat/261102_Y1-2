#include <iostream>
#include <string>
using namespace std;
int main(){
	int num = 6;
	if (num>5){
		cout <<"A";
		if(num%3==1){
			cout<<"B";
		}else{
			cout << "C";
		}
	}
	cout <<"D";
	
	cout << "\n------------------------\n";
	int num1=4;
	if(num1 <=3){
		cout<< "A";
		if (num1%4==0){
			cout << "B";
		}else{
			cout << "C";

		}
	}else {
		cout << "D";
		if(num1%3==1){
			cout<< "E";
		}else{
			cout << "F";
		}
	}
	
	cout << "\n------------------------\n";
	int num2=4;
	if (num){
		cout<<"A";
	}else {
		cout<<"B";
	}
	
	cout << "\n------------------------\n";
	int num3=3;
	if (num==3){
		cout <<"A";
	}else{
		cout <<"B";
	}
	
	cout << "\n------------------------\n";
	int num4=4;
	if (num = 3){
		cout<< "A";
	}else {
		cout << "B";
	}
	
	cout << "\n------------------------\n";
	int count=0;
	while (count%6!=1 || count<10){
		cout <<"x";
		if (count%5==2){
			cout << "\n";
		}
		count++;
	}

	return 0;
}
