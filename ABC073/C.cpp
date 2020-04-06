#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,ans = 0; cin >> N;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  sort(A.begin(),A.end());
  rep(i,N){
    int j = i;
    while(A[i] == A[j]) j++;
    ans += (j-i) % 2;
    i += j-i-1;
  }
  cout << ans << endl;
  return 0;
}
