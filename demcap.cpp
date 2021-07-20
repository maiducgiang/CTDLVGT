#include<bits/stdc++.h>
#include <math.h>
using namespace std;
void solve(){
	int n, m ;
	cin >> n >> m;
	int a[n], b[m], check[5] = {0};
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++){
		cin >> b[i];
		if(b[i] < 5) check[b[i]] += 1;
	} 
	sort(b, b + m);
	long long sum = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 0) continue;
		if(a[i] == 1) {
			sum += check[0];
			continue;
		}
		sum += check[0] + check[1];
		int *num = upper_bound(b, b + m, a[i]);
		//cout << num<<endl;
		sum += b + m - num;
		if(a[i] == 2) sum -=(check[3] + check[4]);
		if(a[i] == 3) sum +=(check[2]);
	}
	cout<<sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


