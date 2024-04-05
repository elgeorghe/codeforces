#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int x, i, res, y ,z, w;
    res = 0;
    cin >> x;
    

    for (i = 0; i < x; i++)
    {
        cin >> y >> z >> w;

        if((y+z+w) >= 2){
            res++;
        }    
    }
    cout << res << "\n";
}