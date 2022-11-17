#include <iostream>

using namespace std;


string s;
int num;
int removed = 0;
int main(){
	cin >> num;
	cin >> s;
	for(int i = 0; i < num-1; i++){
		if(s[i] == s[i+1]){
			removed++;
		}		
	}
	cout << removed << endl;
	
}


