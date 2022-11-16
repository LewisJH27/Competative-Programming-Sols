#include <iostream>
using namespace std;

int main(){
    string x;
    cin >> x;
    int num, counts = 1;
    for(int i = 1; i < x.length(); ++i){
        cout << i << endl;
        if(x[i] == x[i-1]){
            counts += 1;
            if(counts == 7){
                cout << "YES" << endl;
                return 0;
            }

        }
        else{
            counts = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}