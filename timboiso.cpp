#include<bits/stdc++.h>
using namespace std;

long long n;

void quaylui(){
	queue <long long> a;
	a.push(9);
	while(1){
		if(a.front() % n == 0) {
		cout << a.front();
		return;
		}
		long long x = a.front(); a.pop();
		a.push(x * 10 );
		a.push(x * 10 + 9);
	}
	
}
void solve(){
	
	cin >> n;
	
	quaylui();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


