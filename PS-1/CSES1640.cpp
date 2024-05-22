#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x;
	cin >> n >> x;
	//int d[100]={0};
	//vector<int> v;
	map<int,int> d;
	int a;
	int pos1=0,pos2=0;
	for(int i=0;i<n;i++){
	    //v.push_back(a);
	    cin>>a;
	    if(x-a==a){
	        if(d[x-a]!=0){
	            pos1=d[x-a];
	            pos2=i+1;
	        }
	        d[a]=i+1;
	    }
	    else{
    	    d[a]=i+1;
    	    if(x-a>0){
    	        if(d[x-a]!=0){
        	        pos1=d[x-a];
        	        pos2=d[a];
    	        }
    	    }
	    }
	}
	if(pos1!=0 && pos2!=0) cout<<pos1<<" "<<pos2;
	else cout<<"IMPOSSIBLE";
	return 0;
}
