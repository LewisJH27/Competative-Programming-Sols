#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    int a_count = 0;
    int d_count = 0;
    cin >> n >> s;
    for(int i = 0; i < s.length(); i++ ){
        if(s[i] == 'D'){
            d_count += 1;
        }
        else {
            a_count += 1;

        }
    }
    if(a_count < d_count){
        cout << "Danik" << endl;
    }
    else if(a_count > d_count) {
        cout << "Anton" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
}
