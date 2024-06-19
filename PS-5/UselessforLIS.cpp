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
    cin >> t;
    while(t--){
        int n; cin >> n;
        vi a(n);
        loop(n) cin >> a[i];
        vi dp(n, 1);
        dp[0] = 1;
        //dp[i] length of lis till i
        vi prev(n, 0);
        int ans = 0;
        for(int i = 1 ; i < n ; i++){
            dp[i] = 1;
            prev[i] = i;
            for(int j = 0 ; j < i ; j++){
                if(a[i] > a[j]){
                    if(dp[j] + 1 > dp[i]){
                        prev[i] = j;
                        dp[i] = dp[j] + 1;
                    }
                }
            }
            ans = max(ans, dp[i]);
        }
        vi print(n, 0);
        for(int i = 0 ; i < n ; i++){
            if(dp[i] == ans){
                print[i] = 1;
                int j = i;
                while(j != prev[j]){
                    print[j] = 1;
                    j = prev[j];
                }
                print[j] = 1;
            }
        }
        int c = 0;
        loop(n) if(print[i]) c++;
        cout << c << "\n";
        loop(n){
            if(print[i]) cout << i + 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
