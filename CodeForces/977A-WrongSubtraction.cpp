#include <iostream>
#include <string>
using namespace std;


int n, k;
string s;
int main(){
    cin >> n >> k;
    while(k--)
    {
        int last = n % 10;
        if(last > 0)
        {
            n = n - 1;
        }
        else
        {
            n = n/10;
        }
        
        
    }
    cout << n << endl; 

}   

