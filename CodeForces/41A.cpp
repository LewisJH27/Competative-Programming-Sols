#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{ 
    string str;
    string t;
    cin >> str >> t; 
    reverse(str.begin(), str.end()); 
	if(str == t){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}