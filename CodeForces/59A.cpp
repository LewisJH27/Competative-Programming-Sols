#include <iostream>
using namespace std;

int lowerCase = 0, upperCase = 0;
string s;
int main(){
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] < 92){
            upperCase++;
        }
        else{
            lowerCase++;
        }
    }
    
    if(lowerCase < upperCase)
    {
        transform(s.begin(),s.end(),s.begin(), ::toupper);
    }
    else if(upperCase < lowerCase)
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
    }
    cout << s << endl;
}
