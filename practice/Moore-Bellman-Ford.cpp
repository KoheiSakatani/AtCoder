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

int main(){
  int V,E;
  int start, goal;
  vector<int> c;
  vector<edge> edges;

  cin >> V >> E >> start >> goal;

  //頂点の初期化
  rep(i,V){ c.push_back(INF); cout << "c[" << i << "] = " << c[i] << endl; }

  //スタート地点はコスト0
  c[start] = 0;

  //有向グラフを構造体で管理
  rep(i,E){
    struct edge add;
    cin >> add.from >> add.to >> add.cost;
    edges.push_back(add);
  }

  rep(i,V){
    rep(j,(int)edges.size()){
      struct edge e = edges[j];

      if(c[e.to] > c[e.from]+e.cost){
        c[e.to] = c[e.from]+e.cost;
        /*cout << e.to << "の今のコスト" << c[e.to] <<"と" << e.from << "から" << e.cost << "の辺を使った時にかかるコスト" << c[e.from]+e.cost << "を比較" << endl;
        cout << "c[" << i << "] = " << c[i] << endl;*/
        if(i == V-1){
          cout << "負の経路を検出" << endl;
          break;
        }
      }
    }
  }
  cout << c[goal] << endl;
  return 0;
}
