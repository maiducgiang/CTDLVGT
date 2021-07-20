#include<bits/stdc++.h>
using namespace std;
int min(int x){
	int s = 0, m = 1;
	while(x){
		if(x % 10 == 6) s = s + 5*m;
		else s = s + x % 10 * m;
		x /= 10;
		m*=10;
	}
	return s;
}
int max(int x){
	int s = 0, m = 1;
	while(x){
		if(x % 10 == 5) s = s + 6*m;
		else s = s + x % 10 * m;
		x /= 10;
		m*=10;
	}
	return s;
}
int main(){
	int a, b;
	cin>>a>>b;
	cout<<min(a) + min(b)<<" "<<max(a) + max(b);
}
