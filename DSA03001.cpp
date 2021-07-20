#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long a, dem = 0;
	cin>>a;
	long long b[11]={1,2,5,10,20,50,100,200,500,1000};
	for(int i = 9; i >= 0; i--){
		dem += a/(b[i]);
		a %= b[i];
	}
	cout<<dem<<endl;;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


