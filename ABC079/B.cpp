#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

ll N;
ll L[100];
bool seen[100] = {false};
ll Lucas(int i){
  //cout << "i = " << i << endl;
  if(seen[i] == true || i < 2){
    //cout << "L[" << i << "] = " << L[i] << endl;
    return L[i];
  }
  seen[i] = true;
  L[i] = Lucas(i-1) + Lucas(i-2);
  return L[i];
}

int main(){
  cin >> N;
  L[0] = 2; L[1] = 1;
  ll ans = Lucas(N-1) + Lucas(N-2);
  cout << ans << endl;
  return 0;
}
