#include<bits/stdc++.h>
using namespace std;
int n;
void out(int m, int a[11][11]){
	cout<<"[";
	for(int i = 1; i < m; i++) cout<<a[n - m][i]<<" ";
	cout<<a[n - m][m]<<"]";
}
void test(int k, int a[11][11]){
	if(k == n) return;
	else
	{
		if(k > 0) for(int i = 1; i <= n - k; i++) a[k][i] = a[k - 1][i] + a[k - 1][i + 1];
		test(k + 1, a); 
		out(n - k, a);cout<<" ";
		
		
	}
}
void solve(){
	cin>>n;
	int a[11][11];
	for(int i = 1; i <= n; i++) cin>>a[0][i];
	test(0, a);	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


