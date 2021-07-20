#include<bits/stdc++.h>
using namespace std;

void process(long long *a, int n){
	stack<int> st;
	int N[100005],R[100005];
	for( int i = n-1; i>=0; i--) {
		while(!st.empty() && a[i] >= st.top()) st.pop();
		if(!st.empty()) R[i] = st.top();
		else R[i] = -1;
		st.push(a[i]);
	}
	for ( int i = 0; i<n; i++) cout << R[i] << " ";
	cout << endl;
}
void solve(){
	int n;
	cin >> n;
	long  long a[100005];
	for ( int i = 0; i<n; i++) cin >> a[i];
	process(a,n);
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than
