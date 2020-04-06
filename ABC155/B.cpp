#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  vector<int> A(N,0);
  rep(i,N){
    cin >> A[i];
  }
  rep(i,N){
    if(A[i]%2 == 0){
      if(A[i]%3 != 0 && A[i]%5 != 0){
        cout << "DENIED" << endl;
        return 0;
      }
    }
  }
  cout << "APPROVED" << endl;
  return 0;
}
