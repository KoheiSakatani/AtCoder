#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,K; cin >> N >> K;
  vector<ll> A(N), p,n;
  rep(i,N){
    cin >> A[i];
    if(A[i] < 0) n.push_back(A[i]);
    else p.push_back(A[i]);
  }
  vector<ll> ans;
  if(K <= n.size()*p.size()){
    rep(i,p.size()){
      rep(j,n.size()){
        ans.push_back(p[i]*n[j]);
      }
    }
    sort(ans.begin(),ans.end());
    cout << ans[K-1] << endl;
  }
  else{
    rep(i,p.size()-1){
      for(int j = i+1; j < p.size(); ++j){
        ans.push_back(p[i]*p[j]);
      }
    }
    rep(i,n.size()-1){
      for(int j = i+1; j < n.size(); ++j){
        ans.push_back(n[i]*n[j]);
      }
    }
    sort(ans.begin(),ans.end());
    //rep(i,ans.size()) cout << i << " " << ans[i] << endl;
    cout << ans[K-n.size()*p.size() - 1] << endl;
  }
  return 0;
}
