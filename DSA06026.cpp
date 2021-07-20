#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
	int code = a;
	a = b;
	b = code;
}
void solve(){
	int n;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i];
	int dem = 0;
	for(int i = 1; i < n; i++){
		int code = 0;
		for(int j = 1; j < n; j++) if(a[j] >a[j + 1]) {
			code = 1;
			swap(a[j], a[j + 1]);
		}
		if(code == 1){
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


