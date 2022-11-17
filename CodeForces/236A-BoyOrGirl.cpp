#include <iostream>

using namespace std;

string s;
int num;
int dupes;
int main(){
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		for (int j = 0; j < i; j++){
			if (s[i] == s[j]){
				num++;
			}
		}
		
		if(num == 0){
			dupes++;
		}
		num = 0;	
	}

	if(dupes % 2 != 0){
		cout << "IGNORE HIM!" << endl;
	}
	else{
		cout << "CHAT WITH HER!" << endl;
	}
}

//Test case 6: "initufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn"
//Failed due to absence of resetting num back to 0 upon each iteration
/*
#include <iostream>

using namespace std;

string s;
int num;

int main(){
	
	for(int i = 0; i < s.size(); i++){
		for (int j = 0; j < i; j++){
			if (s[i] == s[j]){
				num++;
			}
		}	
	}
	int letterCount;
	letterCount = s.size() - num;
	if(letterCount % 2 != 0){
		cout << "IGNORE HIM!" << endl;
	}
	else{
		cout << "CHAT WITH HER!" << endl;
	}
}
*/
