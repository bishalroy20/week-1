#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; cin >> a >> b;

    if(a == b){
        cout << a+b << '\n';
        
    }
    else{
        int mx = max(a,b);
        cout << mx+(mx-1) << '\n';
    }
    return 0;
}