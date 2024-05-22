#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vi v;
    int p;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    int g=0;
    while(i<j){
        if(v[i]+v[j]<=x){
            g++;
            i++;
            j--;
            n-=2;
        }    
        else{
            g++;
            j--;
            n--;
        }
    }
    if(n) g++;
    cout<<g;
    return 0;
}
