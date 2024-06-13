#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        int n; cin >> n;
        string s; cin >> s;
        int flag = 1;
        if(n == 2)
            if(s[0] >= s[1]) flag = 0;
        if(flag){
            cout << "YES\n";
            cout << "2\n";
            cout << s[0] << " ";
            for(int i = 1 ; i < n ; i++) cout << s[i];
            cout << "\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
