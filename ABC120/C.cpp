#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

string S;
ll C_0 = 0,C_1 = 0,sum = 0;
int main(){
  cin  >> S;
  rep(i,S.length()){
    if(S[i] == '0') C_0++;
    else C_1++;
  }
  sum = 2 * min(C_0,C_1);
  cout << sum << endl;
  return 0;
}
