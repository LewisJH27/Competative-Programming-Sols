 #include <iostream>

using namespace std;


int k, n, w;
int amount = 0;
int main(){
	cin >> k >> n >> w;
	for(int i = 1; i <= w; i++){
		amount += i*k;
	}

	if(n > amount){
		cout << 0 << endl;
	}else{
		cout << amount - n << endl;
	}
	
	
}
