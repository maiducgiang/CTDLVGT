#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include <queue>
using namespace std;
struct cmp{ bool operator() (long long a,long long b) {return a>b;} }; 
void solve(){
	long long n, s = 0;
	cin>>n;
	priority_queue < long long , vector <long long> , cmp > a;
	for(int i = 1; i <= n; i++){
		cin>>s;
		a.push(s);
	}
	s = 0;
	while(a.size() != 1){
		int x = a.top();a.pop();
		int y = a.top();a.pop();
		s+=x+y;
		a.push(x + y);
	}
	cout<<s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
