#include<bits/stdc++.h>
using namespace std;
int n, k;
vector <int> a;
void check(){
	int k = 0, i = a.size();
	while(a[a.size() - 1] == 1 && i >= 0){
		i--;
		k += a[a.size() - 1];
		a.pop_back();
	} 
	k += 1;
	a[a.size() - 1] -= 1;
	int num    = a[a.size() - 1] ;
	int nguyen = k / num;
	int du     = k % num;
	if(nguyen > 0){
		for(int j = 1; j <= nguyen; j++) a.push_back(num);
	}
	if(du > 0){
		a.push_back(du);
	}
	
	cout <<"(";for(i = 0; i < a.size() - 1; i++) cout << a[i] <<" ";cout <<a[a.size() - 1] << ") ";
	if(a[0] == 1) return;
	else check();
}
void solve(){
	a.clear();
	int n;
	cin >> n;
	a.push_back(n);
	cout <<"(" << n << ") ";
	if(n > 1) check();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


