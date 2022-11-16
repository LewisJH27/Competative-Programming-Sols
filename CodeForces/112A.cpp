//
//  main.cpp
//  112A
//
//  Created by Lewis Hodgson on 20/08/2022.
//

#include <iostream>
using namespace std;

string a,b;

int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        if(a[i]<92){
            a[i] += 32;
        }
        if(b[i] < 92){
            b[i] += 32;
        }
    }
    if (a < b){
        cout << -1;
    }
    if (b < a){
        cout << 1;
    }
    if (a == b){
        cout << 0;
    }
    return 0;
}

