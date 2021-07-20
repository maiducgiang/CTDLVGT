#include<bits/stdc++.h>
#include<vector>
using namespace std;
int a[12], n, A[12], m, k, s;
vector <int> test(12, 0);

int sum(int k){
	int tong = 0;
	for(int i = 1; i <= k; i++) tong+=A[i];
	return tong;
}

int out(int k){
	cout<<"[";
	for(int i = 1; i < k; i++) cout<<A[i]<<" ";
	cout<<A[k]<<"]"<<" ";
}

void test1(int i, int k){
	for(int j = i; j <= n; j++)
	if(test[j] == 0)
	{
		A[k] = a[j];
		test[j] = 1;
		if(sum(k) == m) out(k);
		else
		if(sum(k) > m)
		{
			test[j] = 0;
			return;
		} 
		if(j == n)
		{
			test[j] = 0;
			return;
		} 
		else
		{
			test1(j + 1, k + 1); 
			test[j] = 0;
		}
		
		
	}
}
void solve(){
	cin>>n>>m;
	s = 0;
	for(int i = 1; i <= n; i++) cin>>a[i];
	sort(a + 1, a + n + 1);
	test1(1, 1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


