#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);
    ll mean=p[n/2];
    ll cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(p[i]-mean);   
    }
    
    cout<<cost;
	return 0;
}
