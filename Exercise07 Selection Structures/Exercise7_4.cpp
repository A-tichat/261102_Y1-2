#include <iostream>
using namespace std;

void func1(int x=3);
void func2(int num=20);

int main(){
	func1();
	cout << "\n";
	func2();
	return 0;	
}

void func1(int x){
	switch (x){
		case 7:
			x*=2;
			x++;
			break;
		case 3:
			x++;
		case 5:
			x%=3;
			x+=4;
			break;
		case 0:
		case 2:
			x/=2;
			x--;
			break;
		default:
			x++;
	}
	cout << "x = " << x;
}

void func2(int num){
	
	if (num>=10){
		cout << "A";
		cout << "B";
	}else if (num >=5)
		cout << "C";
	else
		cout << "D";
		cout << "E";
	
	cout << "F";
}


