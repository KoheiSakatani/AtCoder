#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;

int N;
int a[100010];
bool lights[100010];
int main(){
  cin >> N;
  rep(i,N) cin >> a[i];
  rep(i,N) lights[i] = true;
  //これから押すスイッチの番号-1がsに入る
  int next_s = 0, c = 0,g = 2;
  rep(i,N){
    if(lights[next_s] == false){
      cout << "-1" << endl;
      return 0;
    }
    lights[next_s] = false;
    next_s = a[next_s];
    if(next_s == g) break;
    next_s--;
  }
  rep(i,N) if(!lights[i]) c++;
  cout << c << endl;
  return 0;
}
