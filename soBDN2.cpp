#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(){
	queue <long long> a;
	long long n;
	cin >> n;
	a.push(1);
	for(int i = 1; ; i++){
		long long x = a.front(); a.pop();
		if(x % n == 0 ) {
			cout << x;
			break;
		}
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


