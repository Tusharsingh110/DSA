/*
	autor tushar
*/
 
 
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define nln "\n"
#define vln vector<long long>
#define all(x) x.begin(),x.end()
#define vi vector<int>
#define yes cout<<"YES"<<nln; return;
#define no cout<<"NO"<<nln; return;
#define pb push_back
#define ppb pop_back
#define mo map<ll,ll>
#define vlp vector<pair<ll,ll>> 
#define vs vector<string>
#define fr(i,x,y) for( ll (i) = (x) ; (i) < (y) ; ++(i))
#define frr(x) for( ll j = 0 ; j < x ; ++j)
#define mn(x) *min_element(all(x))
#define mx(x) *max_element(all(x))
 
 
 
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif
	}
int alp[26];
	ll expo(ll a, ll b , ll m){ll result =1; while(b>0){ if(b&1)result = (result*a) % m; a= a*a%m; b = (b>>1); } return result;}
	ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
	void disp(){fr(i,0,26)cout<<char(i+'a')<<" : "<<alp[i]<<nln;}
	void disp(vln &v){for(auto x:v)cout<<x<<" "; cout<<nln;}
	bool sortbyfir(const pair<int,int> &a,const pair<int,int> &b){return (a.first < b.first);}
	int palind(string s){string t=s;reverse(all(t));for (int i = 0; i < s.size(); ++i){if(t[i]!=s[i]) return -1;}return 1;}
	void sub_min(ll &a,ll &b){ll c= min(a,b);b=b-c;a=c-a;}
	ll apowerb(int a,int b){if(b==0) return 1; if(b&1){return a*apowerb(a,b/2)*apowerb(a,b/2);}else return apowerb(a,b/2)*apowerb(a,b/2);}
	ll mod_fact(ll n, ll mod){if(n >= mod ){ return 0;}else{n = n%mod;ll result =1;if(n==0){return result;}else{for(ll i = 1;i <=n ; i++) {	result = (result*i)%mod;}}return result;}}
	ll mod_mul(ll a,ll b,ll m){a=a%m; b=b%m;return ((((a * b) % m) + m) % m);}
	ll mod_div(ll a, ll b, ll m){a=a%m; b=b%m; return ((mod_mul(a, mminvprime(b,m), m) + m) % m) ;}
	ll Cmod(ll n,ll r,ll mod){if(n>=r){ll a = mod_fact(n,mod);ll b = mod_fact(r,mod);ll c = mod_fact(n-r,mod);ll d = mod_mul(b,c,mod);ll ans = mod_div(a,d,mod);return ans;} else return 0;}
	ll findmex(set<ll> &v){ll x=0,found=1;while(found){ auto it = v.find(x); if(it == v.end()){return x;}else x++;}return x;}
	bool is_palin(vln &v){ll nn = v.size();ll n=nn/2;if(nn&1)n++;fr(i,0,n){if(v[i] != v[(nn-1)-i]){ return false;}}return true;}
	void prt_stack(stack<int> &s){if(!s.empty()){int x = s.top();s.pop();prt_stack(s);cout<<x<<" ";}}
	void vlninput(vln &v){for (auto& u : v)cin >> u;}
	void vlpinput(vlp &v){for (auto& u : v)cin >> u.first>>u.second;}
	void dispvlp(vlp &v){for (auto& u : v)cout << u.first<<" "<<u.second<<nln;}
	bool is_prime(ll n) {if(n <= 1) return false;else if (n==2) return true;else {ll sum=0;for(ll i=2;i*i<=n;i++) {if(n%i==0) {return false;}}return true;}}
 
 
 // bitset<40> b1(7); 
// 		string str=b1.to_string();
// 		cout<<str<<nln;
 
 
////////////////////////	solve /////////////////////////////////////
 
 
 
 
 
 
 
 
 
 
 

	void solve(){
		ll a=0,b=0,c=0,d=0,m=0,n=0,l=0,r=0,mx=INT_MIN,mn=INT_MAX;
		cin>>m>>n;
		// vln v(n);
		// vlninput(v);
		vector<vln> v(m,vln(n,0));
		for(auto &x:v) {
			for(auto &y:x) cin>>y;
		}
		int top = 0 , left = 0 , right = n , down = m;
		while(top < m and right >0 and left<n and down >0 and top<down and left < right) {
			if(d==0) {
				for(int i=left;i<right;i++) {
					cout<<v[top][i]<<" ";
				}
				top++;
			}
			else if(d==1) {
				for(int i=top;i<down;i++) {
					cout<<v[i][right-1]<<" ";
				}
				right--;
			}
			else if(d==2) {
				for(int i=right-1;i>=left;i--) {
					cout<<v[down-1][i]<<" ";
				}
				down--;
			}
			else {
				for(int i=down-1;i>=top;i--) {
					cout<<v[i][left]<<" ";
				}
				left++;
			}
			d++;
			d%=4;
		}
   	}
 
 
 
 
 
 //
 
 
 
 
 // 
 
 
 
 
 
//////////////////////////////     main   ////////////////////////////////////
 
 
int main(){
//init_code();
ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int t;
	t=1;	
	cin>>t;
	while(t--){
	solve();
	cout<<nln;
	}
	return 0;
}