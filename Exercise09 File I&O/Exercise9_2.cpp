#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
	float min,max;
	cout << "Enter range of the scores [min, max] for counting: ";
	cin >> min >> max;
	ifstream source ("D://261102_Y1-2//Exercise09 File I&O//score.txt");
	string text;
	float num,a=0;
	
	while(getline(source,text)){
		num= atof(text.c_str());
		if (max<min) {
			a=-1;
			break;
		}
		else if (num>=min && num<=max) a++;
	}
	source.close();
	if (a>=0)cout << "The number of students who have scores in this range = " << a;
	else if (a==-1) cout << "Invalid input. (max >= min)";
	return 0;
}

