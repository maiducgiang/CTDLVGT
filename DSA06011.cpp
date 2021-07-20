#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin>>a[i - 1];
	int minn = a[0] + a[1];
	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			{
				//if(minn == 0 ) minn = a[i] + a[j];
				if(abs(a[i] + a[j]) < abs(minn) ) minn = a[i] + a[j];
			}
	cout<<minn;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
