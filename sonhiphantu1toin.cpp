#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(){
	queue <long long> a;
	int n;
	cin >> n;
	a.push(1);
	for(int i = 1; ; i++){
		long long x = a.front(); a.pop();
		cout << x <<" ";
		a.push(x * 10);
		a.push(x * 10 + 1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


