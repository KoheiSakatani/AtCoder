#include <iostream>
#include <vector>

#define INF 1000000000
#define rep(i,n) for(int i = 0; i < (n); ++i)

using namespace std;

struct edge{
  int from;
  int to;
  int cost;
};

int V,E;

min_val(double a,doouble b){ if(a >= b) return b; else return a; }

Theo(vector<vevctor<int> > F, int n){
  int min_var;
  double min_v = INF;
  rep(k,n){
    double tmp = min_val(min_v,(double)((F[n][x] - F[k][x])/(n-k)));
  }
}

int main(){
  int s; cin >> V >> E >> s;
  int n = V;

  vector<vector<int> > F;
  vector<edge> edges;
  vector<vector<int> > p; //経路のバックトレース
  //コストを初期化
  rep(i,n){
    if(i == s) F[0].push_back(0);
    else F[0].push_back(INF);
  }
  rep(i,E){
    struct edge add;
    cin >> add.from >> add.to >> add.cost;
    edges.push_back(add);
  }

  for(int k = 1; k <= n; ++k){
    for(int x = 0; x < n; ++x){
      F[k][x] = INF;
      for( edge e :  edges){
        if(e.to == x){
          int w = e.from;
          if((F[k-1][w]+e.cost) < F[k][x]){
            F[k][x] = F[k-1][w] + e.cost;
            p[k][x] = w;
          }
        }
      }
    }
  }
  int c = 0;
  for(int x = 0; x <= n; ++x){
    if(F[n][x] == INF) c++;
  }
  if(c == n){ cout << "Gは無閉路" << endl; return -1; }


}
