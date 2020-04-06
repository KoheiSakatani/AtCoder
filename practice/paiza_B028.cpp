#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int n,g,m; cin >> n >> g >> m;
  vector<vector<int> > groups(g);
  rep(i,g){
    int tmp; cin >> tmp;
    rep(j,tmp){
      int mem; cin >> mem;
      groups[i].push_back(mem);
    }
  }
  vector<vector<string> >  msgs(n);
  rep(i,m){
    int from, to, everyone;
    string msg;
    cin >> from >> everyone >> to >> msg;
    msgs[from-1].push_back(msg);
    if(everyone == 1){
      rep(j,groups[to-1].size()){
        if(from != groups[to-1][j]) msgs[(groups[to-1][j])-1].push_back(msg);
      }
    }else{
      msgs[to-1].push_back(msg);
    }
  }
  rep(i,n){
    rep(j,msgs[i].size()){
      cout << msgs[i][j];
      if(j != msgs[i].size()-1) cout << endl;
    }
    cout << endl;
    if(i != n-1){ cout << "--" << endl; }
  }
  return 0;
}
