#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

typedef long long ll;
const long long INF = 1LL << 60;

ll r1 = INF,r2 = INF,r;
ll L,R, MIN = INF;
int main(){
  cin >> L >> R;
  if(R-L >= 2019) cout << "0" << endl;
  if(R <= 2019) R = 2019;
  for(int i = L; i < L+R; ++i){
    for(int j = i+1; j <= L+R; ++j){
      //cout << "i = " << i << " j = " << j << endl;
      //cout << "i * j = " << i*j << endl;
      r1 = i%2019;
      r2 = j%2019;
      r = r1 * r2;
      //cout << "r = " << r << endl;
      if(r < MIN) MIN = r;
    }
  }
  cout << MIN << endl;
  return 0;
}
