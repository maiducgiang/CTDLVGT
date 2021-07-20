#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, dem = 0;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin>>a[i];
	}
	for(int i = 1; i < n; i++)
	{
		int check = 0;
		for(int j = i + 1; j <= n; j++) if(a[i] > a[j]){
			check = 1;
			int code = a[i];
			a[i] = a[j];
			a[j] = code;
		}
		if(check == 1){
			cout<<"Buoc "<<++dem<<": ";
			for(int t = 1; t <= n; t++) cout<<a[t]<<" "; cout<<endl;
		}
		
	}
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


