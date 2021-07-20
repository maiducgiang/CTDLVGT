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
		int min = a[i], vitri = i;
		for(int j = i + 1; j <= n; j++) if(a[j] < min){
			min = a[j];
			vitri = j;
		}
		//if(min != a[i]){
			int code = a[i];
			a[i] = a[vitri];
			a[vitri] = code;
			cout<<"Buoc "<<++dem<<": ";
			for(int t = 1; t <= n; t++) cout<<a[t]<<" "; cout<<endl;
		//}
		
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
