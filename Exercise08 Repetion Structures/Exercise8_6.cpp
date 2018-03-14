#include <iostream>
using namespace std;

void func1(int i=1);
void func2(int sum=3);
void func3(int y=8);
void func4(int x=1);
void func5(int x=2);
void func6(int x=2);
void func7(int i=1);
void func8(int i=1);

int main(){
	func1();
	cout << "\n";
	func2();
	cout << "\n";
	func3();
	cout << "\n";
	func4();
	cout << "\n";
	func5();
	cout << "\n";
	func6();
	cout << "\n";
	func7();
	cout << "\n";
	func8();
	return 0;
}

void func1(int i){
	cout << "func1\n";
	for (;i<13;i+=2){
		cout << "A";
		if (i%3 == 0) cout << "B";
	}
	cout << i;
	//AABAAABA13
}

void func2(int sum){
	cout << "func2\n";
	for(int x = 1; x<10;x+=3){
		sum+=x*x;
	}
	cout << sum;
	//69
}

void func3(int y){
	cout << "func3\n";
	for (int x=10;x<10;x--){
		y/=x;
	}
	cout << y;
	//8
}

void func4(int x){
	cout << "func4\n";
	while (x%10){
		x+=3;
		cout << x <<" ";
	}
}

void func5(int x){
	cout << "func5\n";
	while (x<20){
		x+=3;
		if (x%10 == 7) continue;
		cout << x;
	}
	cout << "end";
	//58111420end
}

void func6(int x){
	cout << "func6\n";
	while(x<20){
		x+=3;
		if (x%10 == 7) break;
		cout << x;
	}
	cout << "end";
	//581114end
}

void func7(int i){
	cout << "func7\n";
	for (;i<3;i++){
		for (int j=1;j<5;j++){
			cout << i+j << "*";
		}
		cout << "\n";
	}
	/*
	2*3*4*5*
	3*4*5*6*
	
	*/
}

void func8(int i){
	cout << "func8\n";
	for (;i<4;i++){
		for(int j=1;j<=i;j++){
			cout << i+j << "*";
		}
		cout << "\n";
	}
	/*
	2*
	3*4*
	4*5*6*
	
	*/
}
