#include <iostream>
using namespace std;

string tommy(int x,int y){
	string level;
	
	if ( x<50 ){
		y<50 ? level="Unfriend" : level="Friend";
	}else if ( x>50 && x<80 ) {
		y<50 ? level="One-night-stand": level="Friend";
	}else if ( x>80 ) {
		y<50 ? level="One-night-stand":level="Girlfriend";
	}
	
	return level;
	
}

int main(){
	int x,y;
	cout << "Enter 2 number of level (face character): ";
	cin >> x >> y; 
	cout << tommy(x,y);
	return 0;
}
