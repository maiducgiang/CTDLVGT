#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int n, k;
string s;
int a[101];
void quaylui(){
	int i = n - 1; 
	while(a[i] >= a[i + 1] && i != 0){i--;}
	if(i == 0) {
		cout<<"BIGGEST";
		return;
	}
	int j = n;
	while(a[j] <= a[i] && j != 0){j--;}
	//cout<<i<<" "<<j<<endl;
	swap(a[i], a[j]);
	sort(a + i + 1, a + n + 1);
	for(int i = 1; i <= n; i++) cout<<a[i];
	//cout<<endl;
}
void solve(){
	cin>>k>>s;
	n = s.length();
	for(int i = 0; i < s.length(); i++){
		a[i+1] = s[i]-'0';
	} 
	cout<<k<<" ";
	quaylui();
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
			   solve();
			   cout<<endl;
   }
}
