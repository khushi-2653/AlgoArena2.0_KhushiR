#include <bits/stdc++.h>
using namespace std;
int msb(int n){
    int ans = 1;
    while(n){
        n = n >> 1;
        ans = ans * 2;
    }
    return ans / 2;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << msb(n) - 1 << "\n";
    }
    return 0;
}
