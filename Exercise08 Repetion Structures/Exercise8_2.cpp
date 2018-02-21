#include <iostream>

using namespace std;

int main(){
	int sum=0;
	int j=0;
	for(int i=3;i<=333;i+=3){
		j%2==0 ? sum+=i*i*i:sum+=i*i;
		j++;
	}
	cout << "Sum is " << sum;
	return 0;
}
