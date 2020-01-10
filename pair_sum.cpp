#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
ll n, k, i, j;
cin >> n >> k;
ll a[n+1] = {};
for(i = 1; i<=n; i++) cin >> a[i];
sort(a, a+n+1);

i = 1; j = n;
while(i < j){
if(a[i] + a[j] == k){
cout<<"YES";
return 0;
}
else if(a[i] + a[j] > k) j--;
else if(a[i] + a[j] < k) i++;
}

cout<<"NO";
return 0;
}

 
