#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    int hards = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        if(r == 1)
        {
            hards++;
        }

    }
    if(hards >= 1)
    {
        cout << "Hard" << endl;

    }
    else
    {
        cout << "Easy" << endl;
    }
}
