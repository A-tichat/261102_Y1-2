#include <iostream>
#include <cmath>
using namespace std;

//code 1.1)
void myFunc1(int a){
	if (a%2==0){
		cout << "A";
	}else{
		cout << "B";
	}
}

//code 1.2)
void myFunc2(int b){
	int count=0;
	while(count<b){
		cout << b;
		count++;
	}
	cout << "\n";
}

//code 1.3)
int myFunc3(int c){
	if (c>5){
		cout << "A";
		return c;
	}
	return 2*c;
}

//code 1.4)
int func1(int d,int e){
	return pow(e,d) + pow(d,e);
}
int func2(int f){
	return func1(f,f-1)+func1(f-1,f-2);
}

int main(){
	cout << "1.1)\n";
	int aa = 0;
	while (aa<5){
		myFunc1(aa);
		aa++;
	}
	cout <<"\n-------------------\n";
	
	cout <<"1.2)\n";
	int bb =1;
	while(bb<=5){
		myFunc2(bb);
		bb++;
	}
	cout <<"-------------------\n";
	
	cout << "1.3)\n";
	cout << myFunc3(2) << myFunc3(6);
	cout <<"\n-------------------\n";
	
	cout << "1.4)\n";
	cout << func2(4);
	return 0;
}
