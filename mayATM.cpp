#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<math.h>
#define qp priority_queue <int,vector<int>,greater<int> >;
#define pq priority_queue <int>;
#define vt vector < vector < long lonng > >;
#define bs  binary_search(begin, end, number);//return true false
#define bs2 binary_search(begin, end, number, bool);// return true false
#define lb  lower_bound(begin, end, number); // return iterator first >= number
#define lb2 lower_bound(begin, end, number, bool); //return iterator
#define up  upper_bound(begin, end, number); // return iterator first > number;
#define up2 upper_bound(begin, end, number, bool); //return iterator
#define re replace(pos, size, s1); //thay the 1 doan size phan tu bang s1
#define er erase(pos, s); // xoa n ki tu tu vi tri pos
//vector<int>::iterator low,up;
//low=lower_bound (v.begin(), v.end(), 20);
//up= upper_bound (v.begin(), v.end(), 20);
bool myfunction (int i,int j) { return (i<j); }
using namespace std;
long long n, s, a[31], mn = 0, code[31] = {0};
void check(int sum, int dem){
	if(sum == s) {
		if(mn == 0) mn = dem;
		else
		mn = (mn > dem) ? dem : mn;
		return;
	}
	else {
		for(int i = 1; i <= n; i++) if(code[i] == 0 && sum + a[i] <= s){
			code[i] = 1;
			check(sum + a[i], dem+1);
			code[i] = 0;
		}
	} 
}
void solve(){
	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> a[i];
	check(0, 0);
	cout << mn;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



