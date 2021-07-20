#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long a2[32], a3[30], l, m;
	cin>>l>>m;
	a2[0] = 1;
	a3[0] = 1;
	for(int i = 1; i <= 30; i++){
		a2[i] = a2[i - 1] * 2;
		if (i < 22) a3[i] = a3[i - 1] * 3;
	}
	int dem = 0;
//	cout<<m<<endl;
	for(int i = 0; i <= 30; i++)
		for(int j = 0; j < 22; j++){
//			cout<<a2[i] * a3[j]<<" "<<m<<endl;
			if(a2[i] * a3[j] >= l && a2[i] * a3[j] <= m) dem++;
			if(a2[i] * a3[j] > m) break;
		}
			
	cout<<dem;
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		cout<<endl;
	}
}


