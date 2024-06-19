//incorrect
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
        int n;
        cin >> n;
        vector< pair< pair<int, int> , int> > s;
        int a, b;
        int m = 0;
        vi p(n);
        loop(n){
            cin >> a >> b;
            m = max(m, b + 1);
            cin >> p[i];
            s.pb({{a, -1}, i});
            s.pb({{b + 1, i}, a});
        }
        sort(s.begin(), s.end());
        vi dp(2 * n + 1, 0);
        dp[0] =  0;
        //int idx, type;
        vi idx(m + 1, 0);
        for(int i = 1 ; i <= 2 * n ; i++){
            dp[i] = max(dp[i], dp[i - 1]);
            if(s[i - 1].first.sc != -1){
                dp[i] = max(dp[i], dp[idx[s[i - 1].second]] + p[s[i - 1].first.sc]);
            }
            else{
                idx[s[i - 1].first.fr] = i;
            }
            cout << dp[i] << "\n";
        }
        // for(auto x : s){
        //     a = (x.first).fr;
        //     type = (x.first).sc;
        //     idx = x.second;
        //     dp[a] = dp[a - 1];
        //     if(type != -1) dp[a] = max(dp[a], dp[idx] + p[type]);
        // }
        //for(int i = 1 ; i <= 2 * n ; i++) cout << dp[i] << " "; 
        cout << dp[2 * n] << "\n";
    }
    return 0;
}
