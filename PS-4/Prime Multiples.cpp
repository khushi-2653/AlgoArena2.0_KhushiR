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
// const ll MOD=1000000007;
// const ll MOD2=MOD-1;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k; cin>>n>>k;
    vector<int> a(k);
    loop(k) {cin>>a[i];}
 
    int sum = 0, K = (1<<k), m,b,y,f = 0;
    for(int x = 1 ; x < K ; x++){
        m = 1; b = 0; f = 0;
        loop(k){
            if (x & (1<<i)){
                b++;
                if(m > n/a[i]){f++; break;} //if m exceeds 10^18 , then we cannot do anything - out of scope
                m *= a[i];
            }
        }
        if(f == 0) y = n / m;
        else y = 0;
        if (b % 2 == 1) sum += y;
        else sum -= y;
    }
    cout << sum << flush;
    return 0;
}
