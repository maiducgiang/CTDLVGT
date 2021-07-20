#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector <int> a(1, 0);
	a[0] = -1;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		for(int j = 0; j < a.size(); j++) if(x < a[j] || j == a.size() - 1){
			a.insert(a.begin() + j, x);
			break;
			//cout<<"a"<<endl;
		} 
		cout<<"Buoc "<<i<<": ";
		for(int j = 0; j < a.size() - 1; j++) cout<<a[j]<<" ";cout<<endl;
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


