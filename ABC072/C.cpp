#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  vector<int> a(N);
  vector<int> c(100010,0);
  rep(i,N){
    cin >> a[i];
    if(a[i]-1 >= 0) c[a[i]-1]++;
    c[a[i]]++;
    c[a[i]+1]++;
  }
  int ans = 0;
  rep(i,c.size()){
    if(ans < c[i]) ans = c[i];
  }
  cout << ans << endl;
  return 0;
}
