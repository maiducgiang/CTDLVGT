#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	scanf("\n");
	while(t--){
		long long n, sum;
		cin>>n;
		int a[n + 1];
		a[0] = 0;
		for(int i = 1; i <= n; i++){
			cin>>a[i];
			a[i] += a[i - 1];
		}
		sum = a[1];
		for(int i = 0; i <= n; i++)
			for(int j = i + 1; j <= n; j++)
			if(a[j] - a[i] > sum) sum = a[j] - a[i];
		cout<<sum<<endl;
	}
}
