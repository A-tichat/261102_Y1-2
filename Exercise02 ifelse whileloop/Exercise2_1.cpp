#include <iostream>
#include <string>
using namespace std;

int main(){
	int num =7;
	if (num >5 ){
		cout << "A";
		cout << "B";
	}
	cout << "C";
	
	cout << "\n------------------------\n";
	int num1 = 7;
	if (num1 >5 ){
		cout << "A";
		cout << "B";
	}else {
		cout << "C";
	}
	
	cout << "\n------------------------\n";
	string text="yes";
	if (text!="yes"){
		cout <<"A";
	}else {
		cout << "B";
	}
	
//	cout << "\n------------------------\n";
//	int num3=7;
//	while(num3>5){
//		cout << "A";
//	}
	
	cout << "\n------------------------\n";
	int num4 = 7;
	while (num4>5){
		cout <<"A";
		num4=num4 - 1;
	}
	
	cout << "\n------------------------\n";
	int num5 =7 ;
	if (num5>5)
		cout <<"A";
		cout <<"B";
	cout << "C";
	
	cout << "\n------------------------\n";
	int num6=4;
	if (num6>5){
		cout << "A";
		cout <<"B";
	}else {
		cout << "C";
	}
	
	cout << "\n------------------------\n";
	string txt = "yes";
	if (txt!="yes"){
		cout << "A";
	}else {
		cout <<"B";
	}
	
//	cout << "\n------------------------\n";
//	int num8=7;
//	while(num8>5){
//		cout <<"A";
//		num=num+1;
//	}

	cout << "\n------------------------\n";
	int num9=15;
	while (num9>2){
		cout <<"A";
		num9 = num9 - 2;
	}
	
	cout << "\n------------------------\n";
	int num10=0;
	while (num10>5){
		cout << "A";
		num10=num10+1;
	}
	
	cout << "\n------------------------\n";
	int num11=1;
	while(num11<100){
		cout <<"A";
		num11=num11*3;
	}
	return 0;
}
