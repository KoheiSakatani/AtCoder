#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

ll A,B,K;
ll a[10010], b[10010];
int main(){
  cin >> A >> B >> K;
  for(int i = 0; i < K; ++i) if(A+i <= B) a[i] = A+i;
  for(int i = 0; i < K; ++i) if(B-i >= A) b[i] = B-i;
  for(int i = 0; i < K; ++i){
    for(int j = 0; j < K; ++j){
      if(a[i] == b[j]) b[j] = 0;
    }
  }
  for(int i = 0; i < K; ++i) if(a[i] != 0) cout << a[i] << endl;
  for(int i = K; i >= 0; --i) if(b[i] != 0) cout << b[i] << endl;

  return 0;
}
