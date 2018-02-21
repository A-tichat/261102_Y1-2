#include <iostream>
using namespace std;

int main(){
	int x,min=0;
	string g;
	cout << "Input number : ";
	cin >> x;
	if (x>0){
		min=x;
		do{
			cout << "Input number : ";
			cin >> x;
			if (x<=0){
				break;
			}else if (x<min) {
				min=x;
			}
		}while(1);
		cout << "Minimun = "<< min;
	}else {
		cout << "Minimun = N/A";
	}
	
	return 0;
}
