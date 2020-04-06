#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  //入力
  int M,D; cin >> M >> D;
  vector<int> month(2),day(2);
  month[0] = M/10; month[1] = M%10;
  day[0] = D/10; day[1] = D%10;

  vector<int> a(4),b(4),m(4);
  rep(i,4) cin >> a[i];
  rep(i,4) cin >> b[i];
  rep(i,4) cin >> m[i];
  //擬似乱数の初期化
  vector<int> w(10001,0),x(10001,0),y(10001,0),z(10001,0);
  //w[0] = x[0] = y[0] = z[0] = 0;
  int ans = 0;
  rep(count,10000){
    //生成した擬似乱数が並べ替えによってM月D日になるかチェック
    vector<int> c(4);
    c[0] = w[count]%10;
    c[1] = x[count]%10;
    c[2] = y[count]%10;
    c[3] = z[count]%10;

    vector<bool> f(4,false);
    rep(i,4){
      if(c[i] == month[0]){
        f[i] = true;
        rep(j,4){
          if(!f[j] && c[j] == month[1]){
            f[j] = true;
            rep(k,4){
              if(!f[k] && c[k] == day[0]){
                f[k] = true;
                rep(l,4){
                  if(!f[l] && c[l] == day[1]){
                    cout << ans << endl;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    //次の擬似乱数を生成
    w[count+1] = (a[0]*w[count]+b[0]) % m[0];
    x[count+1] = (a[1]*x[count]+b[1]) % m[1];
    y[count+1] = (a[2]*y[count]+b[2]) % m[2];
    z[count+1] = (a[3]*z[count]+b[3]) % m[3];
    ans++;
  }
  return 0;
}
