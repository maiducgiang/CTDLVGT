#include<bits/stdc++.h>
using namespace std;
int a[10000], temp = 0;
	int n,k,x;
void Try(int i){
	for ( int j= a[i-1]+1;j<=n-k+i; j++ ){
		a[i] = j;
		if(i==k) {
			int sum = 0;
			for ( int i = 1; i<=k; i++){
				sum+=a[i];
			}	
			if(sum == x)
				temp++;
		}
		else Try(i+1);
	}
	
}
void solve(){

	while(1){
		temp = 0;
		cin >> n >> k >> x;
		if(!n&&!k&&!x) break;
		Try(1);
		cout << temp << endl;
	}
}
int main(){
	solve();
}
//NV Than
