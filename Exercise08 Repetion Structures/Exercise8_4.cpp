#include <iostream>
using namespace std;

void printPattern1(int,int);

int main(){
	int n,m;
	do{
		cout << "Input 2 integer number: ";
		cin >> n >> m;
		if(n==0 && m==0) break;
		printPattern1(n,m);
	}while (1);
	return 0;
}

void printPattern1(int N,int M){
	if (N<=0 || M<=0) {
		 cout << "Invalid input\n";
	}else {
		for (int i=1;i<=N;i++){
			for (int j=1;j<=M;j++){
				if(i%2==1) {
					if (j%2==1) cout << "o";
					else cout << "x";
				}else {
					if (j%2==0) cout << "o";
					else cout << "x";
				}
			}
			cout << "\n";	
		}
	}
}
