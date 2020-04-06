#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;

int num[5];
int main(){
  vector<int> sum;
  rep(i,5) cin >> num[i];
  rep(bit,32){
    int c = 0, tmp = 0;
    rep(j,5){
      if(bit >> j & 1){
        c++;
        tmp += num[j];
      }
    }
    if(c == 3) sum.push_back(tmp);
  }
  sort(sum.begin(),sum.end());
  cout << sum[sum.size()-3] << endl;
  return 0;
}
