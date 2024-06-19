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
//typedef long long ll;
#define INF 1000000001
#define MOD 1000000007
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    //cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector< vector<char> > v(n, vector<char>(m));
        loop(n){
            for(int j = 0 ; j < m ; j++){
                cin >> v[i][j];
            }
        }
        vector<vi> dp(n, vi(m, 0));
        dp[0][0] = 1;
        loop(n){
            for(int j = 0 ; j < m ; j++){
                if(v[i][j] == '#') dp[i][j] = 0;
                else{
                    if(i) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                    if(j) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
                }
            }
        }
        cout << dp[n - 1][m - 1] << "\n";
    }
    return 0;
}
