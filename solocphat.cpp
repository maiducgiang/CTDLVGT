#include<bits/stdc++.h>
#include<queue>
using namespace std;
void solve(){
	queue <long long> a;
	stack <long long> b;
	long long n;
	cin >> n;
	a.push(6);
	a.push(8);
	long long check = pow(10, n);
	//cout << check<<endl;
	for(int i = 1; ; i++){
		long long x = a.front(); a.pop();
		if(x > check) break;
		else
		b.push(x);
		a.push(x * 10 + 6);
		a.push(x * 10 + 8);
	}
	while(!b.empty()){
		cout << b.top() <<" ";
		b.pop();
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


