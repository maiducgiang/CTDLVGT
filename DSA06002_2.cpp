#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
vector <long long> a;
vector <long long> b;
long long n, k;
int leng(long long min, long long max){
	long long i, j = min;
	for(i = min; i < max; i++)
		if(a[i] < a[max]){
			swap(a[i], a[j]);
			swap(b[i], b[j]);
			j++;
		}
		else
		if(a[i] == a[max] && b[i] < b[max]){
			swap(a[i], a[j]);
			swap(b[i], b[j]);
			j++;
		}
	swap(a[max], a[j]);
	swap(b[max], b[j]);
	return j;
}
void sortt(long long min ,long long max){
	if(max > min){
		long long n = leng(min, max);
		sortt(min, n - 1);
		sortt(n + 1, max);
	}
	else return;
}
void solve(){
	cin>>n>>k;
	a.clear();
	b.clear();
	a.push_back(0);
	b.push_back(0);
	for(long long i = 1; i <= n; i++){
		long long x;
		cin>>x;
		a.push_back(abs(x - k));
		b.push_back(x);
	}
	sortt(1, n);
	for(long long i = 1; i <= n; i++) cout<<b[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


