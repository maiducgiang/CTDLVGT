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
void solve(){
	long long n, k, check = 1;
	cin >> n >> k;
	long long a[n + 1], sum = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % k != 0){
		check = 0;
		
	}else
	{
		long long x = sum / k;
		for(int i = 1; i <= n; i++) if(a[i] > sum) {
			check = 0;
			break;
		}
	}
	cout << check;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}



