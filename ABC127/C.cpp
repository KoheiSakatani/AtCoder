#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

ll N,M;
ll l_max = -1, r_min = INF;
int L[100010][100010];
int main(){
  cin >> N >> M;
  rep(i,M){
    cin >> L[i][0] >> L[i][1];
    if(l_max < L[i][0]) l_max = L[i][0];
    if(r_min > L[i][1]) r_min = L[i][1];
  }
  if(l_max > r_min){
    cout << "0" << endl;
    return 0;
  }
  cout << r_min - l_max + 1 << endl;
  return 0;
}
