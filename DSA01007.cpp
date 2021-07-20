#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n + 1], dem = 1;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
		dem *= 2;
		cout<<"A";
	} 
	cout<<" ";
	long long code = 1;
	while(1){
		code++;
		for(int i = n; i >= 1; i--) 
		if(a[i] == 1)
		{
			a[i] = 0;
		}
		else{
			a[i] = 1;
			break;
		}
		for(int i = 1; i <= n; i++) if(a[i] == 0) cout<<"A"; else cout<<"B"; cout<<" ";
		if(code == dem) break;
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


