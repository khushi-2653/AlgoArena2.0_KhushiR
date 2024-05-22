#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m=n,round=0;
    int x[n];
    int dp[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>x[i];
        dp[x[i]]=1;
        if(dp[x[i]-1]){
            m-=2;
            round++;
        }
    }
    round+=m;
    cout<<round;
	return 0;
}
