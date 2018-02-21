#include <iostream>
using namespace std;

int main(){
	char word;
	cout << "Enter (A-Z): ";
	cin >> word;
	
	switch (word){
		case 'A':
			cout << "Awesome";
			break;
		case 'B':
			cout << "Great";
			break;
		case 'C':
			cout << "Good";
			break;
		case 'F':
			cout << "Noob";
			break;
		default:
			cout << "Error: Invalid Input";
	}
	return 0;
}
