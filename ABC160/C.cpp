#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int K, N,k,tmp,tmp2; cin >> K >> N;
  int ans = 10e6+1;
  vector<int> A(N);
  rep(i,N) cin >> A[i];
  rep(i,N){
    if(i == 0){
      tmp = A[N-1]-A[0];tmp2 = abs(K-A[1])+A[0];
    }

    else if(i == N-1){
      tmp = abs(A[N-1]-A[0]); tmp2 = abs(K-A[N-1])+A[N-2];
    }

    else{
      tmp = K-A[i] + A[i-1]; tmp2 = abs(K-A[i+1]) + A[i];
    }
    k = min(tmp,tmp2);
    ans = min(k,ans);
  }
  cout << ans << endl;
  return 0;
}
