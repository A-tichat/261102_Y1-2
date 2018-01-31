#include <iostream>
#include <cmath>
using namespace std;

double findKineticEnergy(double m,double v){
	double E;
	
	E=(1.0/2.0)*m*pow(v,2);
	return E;
}

int main(){
	cout << findKineticEnergy(7,5);
	return 0;
}
