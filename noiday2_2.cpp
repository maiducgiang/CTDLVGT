#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, check;
	cin >> n;
	priority_queue <long long, vector<long long>, greater<long long>> a;
	long long s = 0;
	for(long long i = 0; i <n; i++){
		cin >> check;
		a.push(check);
	} 
	while(a.size() != 1){
		long long first = a.top(); a.pop();
		long long second = a.top(); a.pop();
		s = (s + first + second) % 1000000007;
		a.push((first + second) % 1000000007);
	}
	
	cout << s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout<<endl;
	}
}


