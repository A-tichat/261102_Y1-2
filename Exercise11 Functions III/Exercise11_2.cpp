#include <iostream>
using namespace std;

unsigned long long int fibonacci(int);

int main (){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	return 0;
}

unsigned long long int fibonacci(int x){
	unsigned long long int a=0,b=1,sum=0;
	if (x==0) return a;
	else if (x==1) return b;
	else{
		for (int i=2;i<=x;i++){
			sum=a+b;
			a=b;
			b=sum;
		}
	}
	return sum;
}
