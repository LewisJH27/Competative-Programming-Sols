#include <iostream> 
using namespace std;

int x, moves;
int main(){
    cin >> x;
    moves = x / 5;
    if(x % 5 > 0){
        moves++;
    }
    cout << moves << endl;
    
    
}

