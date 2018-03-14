#include <iostream>
using namespace std;

int x=4;
int WTF(int,int &,int &);
double myFunction2(int a,double b);
int myFunction3(int a,int &b);

int main(){
	cout << "func1\n";
	int m=4,n=5,o=6;
	cout << "return value = " << WTF(m,n,o) << '\n';
	cout << "x = " << m << '\n';
	cout << "y = " << n << '\n';
	cout << "z = " << o << '\n';
	/*
	return value = 51
	x = 4
	y = 25
	z = 6
	*/
	
	cout << "\nfunc2\n";
	cout << "x = " << x++ << "\n";
	int x=10;
	cout << "Result = " << myFunction2(x,::x);
	/*
	x = 4
	Result = 17.5
	*/
	
	cout << "\n\nfunc3\n";
	int p[3]={1,2,3};
	cout << p[1] << " " << p[2] << "\n";
	cout << myFunction3(p[1],p[2]) << "\n";
	cout << p[1] << " " << p[2] << "\n";
	/*
	2 3
	9
	2 6
	*/
	return 0;
}

int WTF(int a,int &b,int &c){
	a*=b;
	if(c>5) b+=a;
	else b-=a;
	return a+b+c;
}

double myFunction2(int a,double b){
	return x+a+b/2;
}

int myFunction3(int a,int &b){
	b*=2;
	a++;
	if (a>b) return 2*a;
	else return a+b;
}
