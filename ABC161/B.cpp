#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,M; cin >> N >> M;
  int A[N], sum = 0,c = 0;
  double judge = (double)1/(double)(4 * M);
  //cout << "judge = " << judge << endl;

  rep(i,N){
    cin >> A[i];
    sum += A[i];
  }
  judge = sum * judge;
  //cout << "judge = " << judge << endl;
  rep(i,N){
    if(judge <= A[i] && c != M){
      c++;
    }
  }
  if(c != M) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
