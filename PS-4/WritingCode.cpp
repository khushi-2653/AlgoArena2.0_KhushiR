#include <bits/stdc++.h>
#define pb push_back
#define int int64_t
#define loop(n) for(int i = 0 ; i < n ; i++)
#define nest(m) for(int j = 0 ; j < m ; j++)
#define fr pair<int,int>::first
#define sc pair<int,int>::second
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;
typedef long long ll;
#define INF 1000000001
// const ll MOD=1000000007;
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    //cin >> t;
    while(t--){
        int n, m, b, mod;
        cin >> n >> m >> b >> mod;
        //vi a(n);
        int a[n];
        loop(n) cin >> a[i];
        int dp[m + 1][b + 1]; 
        for(int i = 0 ; i <= m ; i++){
            for(int j = 0 ; j <= b ; j++) dp[i][j] = 0;
        }
        dp[0][0] = 1;
        loop(n){
            //for every programmer
            for(int j = 0 ; j < m ; j++){
                for(int k = 0 ; k + a[i] <= b ; k++){
                    dp[j + 1][k + a[i]] = (dp[j + 1][k + a[i]] + dp[j][k]) % mod;
                }
            }
        }
        int ans = 0;
        for(int i = 0 ; i <= b ; i++){ 
            //cout << dp[m][i] << "\n";
            ans = (ans + dp[m][i]) % mod;
        }
        cout << ans << "\n";
    }
    return 0;
}
