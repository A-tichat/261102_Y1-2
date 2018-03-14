#include <iostream>
#include <cmath>
using namespace std;

int func1(int);

int main(){
	cout << func1(3);
	return 0;
}

int func1(int a){
	if (a==0) return 1;
	return 2+2*func1(a-1);
}
