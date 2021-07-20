#include<bits/stdc++.h>
#include<vector>
#include<string>
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
int c[1005][1005] = {};
int ch(string a, string b){
	for(int i = 0; i < a.size(); i++)
		for(int j = 0; j < b.size(); j++)
		if(a[i] == b[j]){
			c[i+1][j+1] = c[i][j] + 1;
		}else{
			c[i+1][j+1] = max(c[i+1][j], c[i][j+1]);
		}
	return c[a.size()][b.size()];
}
void solve(){
	string s;
	//cout << ch("ab", "a");
	cin >> s;
	long long mn = s.length();
	for(int i = 1; i < s.length() - 1; i++){
		int x, y;
		string demo = s, s1, s2;
		long long check;
		
		x = i; y = i + 1;
		s1 = ""; s2 = ""; check = 0;
		for(int j = 0; j <= x; j++) s1 = s[j] + s1;
		for(int j = y; j < s.length(); j++) s2 = s2 + s[j];
		check = s.length() - ch(s1, s2) * 2;
		mn = (mn < check) ? mn : check;
		//cout <<check<<endl;
		
		x = i - 1; y = i + 1;
		s1 = ""; s2 = ""; check = 0;
		for(int j = 0; j <= x; j++) s1 = s[j] + s1;
		for(int j = y; j < s.length(); j++) s2 = s2 + s[j];
		check = s.length() - ch(s1, s2) * 2 - 1;
		mn = (mn < check) ? mn : check;
		//cout <<check<<endl;
	}
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



