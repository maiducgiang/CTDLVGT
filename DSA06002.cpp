#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector <int> a(1,0);
int n, k;
int leng(int min, int max){
	int i, j = min;
	for(i = min; i < max; i++)
		if(abs(a[i]-k) <= abs(a[max]-k)){
			swap(a[i], a[j]);
			//cout<<i<<" "<<j<<endl;
			j++;
		}
		/*else if(abs(a[i]-k) == abs(a[max]-k) && a[i] > a[max]){
			
		}*/
	//cout<<max<<" "<<j<<endl;
	swap(a[max], a[j]);
	return j;
}
void sort(int min ,int max){
	if(max > min){
		int n = leng(min, max);
		sort(min, n - 1);
		sort(n + 1, max);
	}
	else return;
}
void solve(){
	cin>>n>>k;
	a.clear();
	a.push_back(0);
	
	for(int i = 1; i <= n; i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	
	sort(1, n);
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


