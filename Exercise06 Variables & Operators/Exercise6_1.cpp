#include <iostream>
#include <string>
using namespace std;

int func1(string a){
	int i=0,x=0,y=0;
	int r1;
	while (i<a.size()){
		if(a[i]=='X'){
			x++;
		}if(a[i]=='Y'){
			y++;
		}
		i++;
	}
	
	if (x>y){
		r1=1;
	}if(y>x){
		r1=-1;
	}if(x==y){
		r1=0;
	}
	return r1;
}

int main(){
	cout << " XYXXYX   = " << func1("XYXXYX") << endl;
	cout << "  XXYY    = " << func1("XXYY") << endl;
	cout << " XYYYYY   = " << func1("XYYYYY") << endl;
	cout << "  XYXY    = " << func1("XYXY") << endl;
	cout << "XXXXXYYYY = " << func1("XXXXXYYYY") << endl;
	cout << "    Y     = " << func1("Y") << endl;
	
	return 0;
}
