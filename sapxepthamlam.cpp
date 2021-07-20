#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void solve(){
	int n, code = 1;
	cin>>n;
	int a[n + 1], b[n+1];
	for(int i = 1; i <= n; i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n/2; i++)
	if(b[i] == a[i] || b[i] == a[n - i + 1])
	{
		if(b[n - i + 1] == a[i] || b[n - i + 1] == a[n - i + 1]){
			
		}
		else{
			code = 0;
			break;
		}
	}
	else{
		code = 0;
		break;
	}
	if(code == 0) cout<<"No";
	else cout<<"Yes";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
