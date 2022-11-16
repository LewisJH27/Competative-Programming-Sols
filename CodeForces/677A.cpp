#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int sum = 0;
    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a > h)
        {
            sum += 2;
        }
        else
        {
            sum += 1;
        }
        
    }
    cout << sum << endl;
    
}