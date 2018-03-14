#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	srand (time(0));
	int x=10*(rand()%5-2);
	int y=(rand()%2)+(rand()%2);
	int z=pow(10,rand()%4);
	cout << x <<endl<<y<<endl<<z; 
	return 0;
}

// -20,-10,0,10,20
// 0,1,2
// 1,10,100,1000
