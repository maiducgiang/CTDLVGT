#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[10005] = {}, b[10005] = {},check = 1;
	for(int i = 1; i <= n; i++) cin >> a[i];
	b[1] = 1;
	for(int i = 2; i <= n; i++)
		{
			b[i] = 1;
			for(int j = 1; j < i; j++) 
			if(a[j] <= a[i]) b[i] = max(b[i], b[j] + 1);
			
			if(check < b[i]) check = b[i];
		}
	//for(int i = 1; i <= n; i++) cout << b[i] << " ";
	cout<< n - check;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


