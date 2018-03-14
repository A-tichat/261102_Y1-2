#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	srand(time(0));
	int w=rand()%100+1;
	int x=2*(rand()%12+1);
	int y=rand()%11-5;
	int z=pow(2,rand()%10+1);
	
	cout <<w<<endl<<x<<endl<<y<<endl<<z;
	
	return 0;
}
