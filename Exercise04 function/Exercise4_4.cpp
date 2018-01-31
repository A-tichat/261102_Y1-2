#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x=0,y;
	

	 cout << "Enter x: ";
	 cin >> x;
	 
	y=sin(pow(x,3))/log((2*x+1)/pow(x,2));
	 cout << "y = " << y;
	return 0;
}
