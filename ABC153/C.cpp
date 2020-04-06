#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;

int N,K;
vector<int> H;
int main(){
  cin >> N >> K;
  rep(i,N){
    int tmp;
    cin >> tmp;
    H.push_back(tmp);
  }
  if(N <= K){
    cout << "0" << endl;
    return 0;
  }
  sort(H.begin(),H.end());
  ll ans = 0;
  rep(i,N-K) ans += H[i];
  cout << ans << endl;
  return 0;
}
