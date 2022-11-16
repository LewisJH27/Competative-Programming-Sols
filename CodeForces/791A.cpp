#include <iostream>
#include <cmath> 
using namespace std;


int a,b;
int years = 0;
int main(){
	cin >> a >> b;
	while(a <= b){
		a = a*3;
		b = b*2;
		years++;
	}
	cout << years << endl;
}
