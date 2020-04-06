#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  int ans[6] = {0};
  double MT[N], mT[N];
  rep(i,N) cin >> MT[i] >> mT[i];
  rep(i,N){
    //猛暑日の条件
    if(MT[i]>=35.0) ans[0]++;
    //真夏日の条件
    else if(MT[i] >= 30.0) ans[1]++;
    //夏日の条件
    else if(MT[i] >= 25.0) ans[2]++;
    //真冬日の条件
    else if(MT[i] < 0) ans[5]++;
    //熱帯夜の条件
    if(mT[i] >= 25.0) ans[3]++;
    //冬日の条件
    if(mT[i] < 0 && MT[i] >= 0) ans[4]++;
  }
  rep(i,6){
    cout << ans[i];
    if(i != 5) cout << " ";
    else cout << endl;
  }
  return 0;
}
