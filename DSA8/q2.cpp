#include<bits/stdc++.h>
using namespace std;

void dfs(int id,map<int,vector<int>>&mp,vector<bool>&vis) {
	if(vis[id]) return;
	vis[id] = true;
	cout<<id<<"->";
	for(auto x:mp[id]) {
		if(!vis[x])
			dfs(x,mp,vis);
	}
} 

int main() {
	int n;
	cin>>n;
	vector<vector<int>> edges(n,vector<int>(2,0));
	for(auto &x:edges) {
		cin>>x[0]>>x[1];
	}
	
	map<int,vector<int>> mp;
	for(auto &x:edges) {
		mp[x[0]].push_back(x[1]);
		mp[x[1]].push_back(x[0]);
	}
	for(auto x:mp) {
		cout<<x.first<<": ";
		for(auto y:x.second) {
			cout<<y<<" ";
		}
		cout<<endl;
	}
	cout<<"DFS invoked!\n";
	int m = mp.size();
	vector<bool> vis(m,false);
	dfs(0,mp,vis);
	cout<<"NULL\n";
	bool flag = true;
	for(int i=0;i<m;i++) {
		if(!vis[i]) {
			flag = false;
		}
	}

	cout<< ((flag) ? ("Connected!!") : ("Not Connected!!"));
	return 0;
}