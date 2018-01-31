#include <iostream>
using namespace std;

char func(char a){
	char r;
	if (a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u'){
		r='y';
	}else {
		r='n';
	}
	return r;
}

int main(){
	cout << "A = " << func('A') << endl;
	cout << "a = " << func('a') << endl;
	cout << "B = " << func('B') << endl;
	cout << "Z = " << func('Z') << endl;
	cout << "6 = " << func('6') << endl;
	cout << "U = " << func('U') << endl;
	cout << "i = " << func('i') << endl;
	
	return 0;
}
