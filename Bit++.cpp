#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int x, a, i;
    string y;
    cin >> a;
    x = 0;

    for (i = 0; i < a; i++)
    {
        cin >> y;

        if ((y == "X++") || (y == "++X"))
        {
            x++;
        }else if ((y == "--X") || (y == "X--"))
        {
            x--;
        }
    }
    


    cout <<x<<"\n";
}