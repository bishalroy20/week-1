/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int mx = *max_element(v.begin(),v.end());
        
    }
    return 0;
}