#include <iostream>
#include <cmath>
using namespace std;

int greatDivisor(int a){
	int i=a,ans[a/2],j=0;
	i--;
	while (i>0){
		if (a%i==0){
			ans[j]=i;
			j++;
		}
		i--;
	}
	return ans[0];
}


int main(){
	cout <<"greatDivisor(1)"<< greatDivisor(1);
	cout <<"\ngreatDivisor(12)"<<greatDivisor(12);
	cout <<"\ngreatDivisor(91)"<<greatDivisor(91);
	cout <<"\ngreatDivisor(49)"<<greatDivisor(49);
	cout <<"\ngreatDivisor(81)"<<greatDivisor(81);
	cout <<"\ngreatDivisor(55)"<<greatDivisor(55);
	
	return 0;
}
