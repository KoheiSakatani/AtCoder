#include <bits/stdc++.h>

typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); ++i )


using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;

ll N;

P swap(P p){
  int tmp = p.first;
  p.first = p.second;
  p.second = tmp;
  return p;
}

int main(){
  cin >> N;
  vector<int> p(N);
  rep(i,N) cin >> p[i];
  if(is_sorted(p.begin(),p.end())){
    cout << "YES" << endl;
    return 0;
  }
  rep(i,N-1){
    for(int j = i+1; j < N; ++j){
      P s = make_pair(p[i],p[j]);
      s = swap(s);
      p[i] = s.first;
      p[j] = s.second;
      rep(k,N) cout << p[k] << " ";
      cout << endl;
      if(is_sorted(p.begin(),p.end())){
        cout << "YES" << endl;
        return 0;
      }
      //配列は非破壊
      s = swap(s);
      p[i] = s.first;
      p[j] = s.second;
    }
  }
  cout << "NO" << endl;
  return 0;

}
