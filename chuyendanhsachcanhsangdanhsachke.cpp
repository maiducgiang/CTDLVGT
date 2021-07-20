#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
	int t;
	cin>>t;#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, k;
	cin>>n>>k;
	int a[k + 1][3];
	for(int i = 1; i <= k; i++) cin>>a[i][1]>>a[i][2];
	for(int i = 1; i <= n; i++)
	{
		cout<<i<<": ";
		for(int j = 1; j <= k; j++)
		if(a[j][1] == i)cout<<a[j][2]<<" ";
		else if(a[j][2] == i) cout<<a[j][1]<<" ";
		cout<<endl;
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
	while(t--){
		solve();
		cout<<endl;
	}
}


