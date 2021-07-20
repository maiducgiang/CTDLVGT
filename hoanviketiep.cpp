#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i];
	for(int i = n; i >= 2; i--)
		if(a[i] > a[i - 1])
		{
			int t = i, min = a[i];
			for(int j = i + 1; j <= n; j++) if(a[j] > a[i - 1] && a[j] < min){
				min = a[j];
				t = j;
			}
			int code = a[t];
			a[t] = a[i - 1];
			a[i - 1] = code;
			for(int j = i; j <= i + (n - i) / 2; j++ ){
				int code = a[i];
				a[i] = a[n - (j - i)];
				a[n -(j - i)] = code;
			}
			break;
			
		}
		else if(i == 2){
			for(int i = 1; i <= n; i++) a[i] = i;
			break;
		}
	for(int i = 1; i <= n; i++) cout<<a[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
