#include<bits/stdc++.h>
using namespace std;
int a[101][101], check[101][101]={}, cot[101] ={0}, n, s; 
vector <long long > b;
vector <string> ss;
void quaylui(int k, long long sum){
	if(k > n && sum == s){
		string sss = "";
		for(int i = 0; i < b.size(); i++){
			sss += (char) b[i] + '0';
			sss += ' ';
		}  
		ss.push_back(sss);
	}
	else{
		for(int i = 1; i <= n; i++)
		if(check[k][i] == 0  && cot[i] == 0){
			b.push_back(i);
			check[k][i] = 1;
			cot[i] = 1;
			sum += a[k][i];
			quaylui(k + 1, sum);
			sum -= a[k][i];
			b.pop_back();
			check[k][i] = 0;
			cot[i] = 0;
		}
	}
}
void solve(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		} 
	}
	quaylui(1, 0);
	cout << ss.size()<<endl;
	for(int i = 0; i < ss.size(); i++) cout << ss[i]<<endl;
}
int main(){
	solve();
}


