#include <bits/stdc++.h>
#define pb push_back
//#define int int64_t
#define loop(n) for(int i = 0 ; i < n ; i++)
#define nest(m) for(int j = 0 ; j < m ; j++)
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef long long ll;
#define INF 1000000001
#define MOD 1000000007
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    //cin >> t;
    while(t--){
        int n; cin >>n;
        int sum = (n * (n  + 1)) / 2;
        if(sum % 2) cout << 0 << "\n";
        else{
            int req = sum / 2;
            vector<vi> dp(n + 1, vi(req + 1, 0));
            dp[0][0] = 1;
            for(int i = 1 ; i <= n ; i++){
                for(int j = 0 ; j <= req; j++){
                    dp[i][j] = dp[i - 1][j] % MOD;
                    if(j >= i) dp[i][j] = (dp[i][j] + dp[i - 1][j - i]) % MOD; 
                }
            }
            cout << dp[n - 1][req] << "\n";
        }
    }
    return 0;
}
