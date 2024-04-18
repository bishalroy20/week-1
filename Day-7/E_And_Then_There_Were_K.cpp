/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

void solve(){
    ll n; cin >> n;
        // int xo = n;
        for(ll i=n-1;i>=1;i--){
            n &= i;
            if(n == 0){
                cout << i << '\n';
                break;
            }
        }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}//tle