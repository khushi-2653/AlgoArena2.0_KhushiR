#include <bits/stdc++.h>
using namespace std;
int parent[1000000];
int root(int a)
{
	if (a == parent[a]) {
		return a;
	}
	return parent[a] = root(parent[a]);
}
void connect(int a, int b)
{
	a = root(a);
	b = root(b);
 
	if (a != b) {
		parent[b] = a;
	}
}
void connectedComponents(int n)
{
	set<int> s;
	vector<int> city;
	for (int i = 1; i <=n; i++) {
	    int old=s.size();
		s.insert(root(parent[i]));
		int ne=s.size();
		if(old!=ne) city.push_back(i);
	}
	cout << s.size()-1<< '\n';
    for(int i=0;i<city.size()-1;i++){
        cout<<city[i]<<" "<<city[i+1]<<endl;    
    }
}
void printAnswer(int N)
{
	for (int i = 0; i <= N; i++) {
		parent[i] = i;
	}
	int m; cin>>m;
	int a,b;
	for (int i = 0; i <m; i++) {
	    cin>>a>>b;
		connect(a,b);
	}
	connectedComponents(N);
}
 
int main()
{
    int N;
    cin>>N;
	printAnswer(N);
 
	return 0;
}
