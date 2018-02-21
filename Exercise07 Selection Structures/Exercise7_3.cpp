#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float x,y,z;
	cout << "Enter X and Y : ";
	cin >> x >> y;
	
	if (x>=20 && y>=20 && x+y>=50){
		y>x ? y=2*y: 0;
		z=(x+y)/2;
	}else {
		z = sqrt(pow(x,2)+pow(y,2));
		z>50? z=50:0;
	}
	cout << "Z is " << z;
	return 0;
}
