#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long double x=0;
	for(int i=2;i<=222;i+=2){
		x+=1.0/i;
	}
	
	cout << fixed;
	cout << setprecision(10);
	cout << "Sum is " << x ;
	return 0;
}
