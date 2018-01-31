#include <iostream>
#include <string>
using namespace std;

int main(){
	int x=10,ans;
	while(x<=50){
		ans=ans+(x*x);
		x++;
	}
	cout <<ans;
	cout <<"\n"<<x;
	
	cout << "\n------------------------\n";
	int y=3,aws;
	while (y<=300){
		aws=aws+(y*y);
		y=y+3;
	}
	cout <<aws;
	return 0;
}
