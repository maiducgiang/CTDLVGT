#include<bits/stdc++.h>
using namespace std;
int  n, k;
vector <int > a(1, 0);
void quaylui(int m) {
   	if (m > k) { 
   		for (int i = 1; i <= k; i++) cout <<(char) (a[i]+'A' - 1); cout << endl;
     	cout << endl; 
		return;
	}
    for (int i = a[m-1] + 1; i <= n-k+m; i++){
		a.push_back(i); 
		quaylui(m+1); 
		a.pop_back();
	}
}

void solve(){
	cin >> n >> k;
	quaylui(1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}


