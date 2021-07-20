#include<bits/stdc++.h>
#include<string>
#include<Math.h>
using namespace std;
void solve(){
	string a;
	cin>>a;
	int n = a.length();
	int c[200][200] = {0};
	for(int i = n; i >= 1; i--) c[i][i] = 1;
	for(int k = 1; k < n; k++){
		for(int i = 1; i <= n- k; i++){
			if(a[i - 1] != a[i + k - 1]) 
			c[i][i + k] = (c[i + 1][i + k] > c[i][i + k - 1])? c[i + 1][i + k] : c[i][i + k - 1];
			else c[i][i + k] = c[i + 1][i + k - 1] + 2;
		}
	}
	if(c[1][n] != 1000)
	cout<<a.length() - c[1][n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


