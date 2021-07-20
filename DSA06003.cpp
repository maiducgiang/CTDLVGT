#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int a[10001];
int dem = 0;
int leng(int min, int max){
	int i, j = min;
	for(i = min; i < max; i++)
		if(a[i] < a[max]){
			//if(i != j)dem += 1;
			swap(a[i], a[j]);
			j++;
		}
	if(max != j) dem += 1;
	swap(a[max], a[j]);
	return j;
}
void sortt(int min ,int max){
	if(max > min){
		int n = leng(min, max);
		sortt(min, n - 1);
		sortt(n + 1, max);
	}
	else return;
}
void solve(){
	int n;
	dem = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) cin>>a[i];
	sortt(1, n);
	cout << dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


