#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(){
    long long n;
    long long sum = 0;
    cin >> n;
    if(n % 2 == 0)
    {
        sum = n / 2;
    }
    else
    {
        sum = (n /2) - n;

    }
    cout << sum << endl;
}