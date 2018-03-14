#include <iostream>
using namespace std;

template <typename T>
T shifting(T,int);

int main(){
	cout << shifting ('A',5.5) <<endl;
	cout << shifting (5,5.5) <<endl;
	cout << shifting (6.9f,2) <<endl;
	cout << shifting (5.5,'A');
	return 0;
}

template <typename T>
T shifting (T x,int y){
	return x+y;
}

/*
F
10 intiger
8.9 float
70.5 because char use ascii code as intiger
*/

