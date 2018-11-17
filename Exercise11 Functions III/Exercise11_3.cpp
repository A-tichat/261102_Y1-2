#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int func1(int);
double func2(double);
double func3(double);

int main(){
	cout << func1(3) << endl;
	cout << func2(3) << endl;
	cout << func3(3) << endl;
	return 0;
}

unsigned long long int func1(int a){
	if (a==0) return 1;
	return pow(2,a)+func1(a-1);
}

double func2(double a){
	if (a==1) return 1;
	return sqrt(a*func2(a-1));
}

double func3(double a){
	if (a<0) return 1;
	return 1+(a/func3(a-1));
}
