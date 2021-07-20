//sapxepchanle
#include<stdio.h>
#include<string.h>
#include<math.h>
void sapxep(int a[1001], int n){
	for(int i = 1; i < n; i++)
		for(int j = i + 1; j <= n; j++) 
		if(a[i] > a[j]){
			int code = a[i];
			a[i] = a[j];
			a[j] = code;
		}
}
void solve(){
	int n, chan = 0, le = 0, a[1001], b[1001], check[1001];
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int dem;
		scanf("%d", &dem);
		if(dem % 2 == 0){
			chan++;
			a[chan] = dem;
			check[i] = 1;
		}else{
			le++;
			b[le] = dem;
			check[i] = 0;
		}
	}
	int code = 1;
	sapxep(a, chan);
	sapxep(b, le);
	for(int i = 1; i <= n; i++)
	if(check[i] == 1){
		printf("%d ", a[code]);
		code++;
	}
	else{
		printf("%d ", b[le]);
		le--;
	}
}
int main(){
	int t;
	t = 1;
	while(t--){
		solve();
		printf("\n");
	}
}


