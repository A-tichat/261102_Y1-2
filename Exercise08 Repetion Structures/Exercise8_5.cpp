#include <iostream>
using namespace std;

void printPattern2(int);

int main(){
	int n;
	do{
		cout << "Input integer number: ";
		cin >> n;
		if(n>70) break;
		printPattern2(n);
	}while (1);
	return 0;
}

void printPattern2(int N){
	if (N<=0) {
		 cout << "Invalid input\n";
	}else {
		for (int i=1;i<=N;i++){
			for (int j=1;j<=i;j++) cout << "o";
			for (int k=1;k<=N-i;k++) cout << "x";
			cout << "\n";	
		}
	}
}
