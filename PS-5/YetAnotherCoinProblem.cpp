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
#define INF 100000001
// const ll MOD=1000000007;
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //n = 1e9, direct dp approach failed on trying, runtime error
    int t = 1; 
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        //need at max 2(1), 1(3), 4(6), 2(10)
        int sum;
        int ans = INF;
        loop(3){
            for(int j = 0 ; j <= 1 ; j++){
                for(int k = 0 ; k <= 4 ; k++){
                    for(int l = 0 ; l <= 2 ; l++){
                        sum = 1 * i + 3 * j + 6 * k + 10 * l;
                        if(sum <= x){
                            if((x - sum) % 15 == 0){
                                ans = min(i + j + k + l + (x - sum) / 15, ans);
                            }
                        }
                    }
                }
            }
        } 
        cout << ans << "\n";
    }
    return 0;
}
