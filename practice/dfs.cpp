#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); ++i)

using namespace std;
using Graph = vector<vector<int> >;

vector<bool> seen; //訪れてるかどうかのパラメータ
vector<int> first_order; //行きがけ順
vector<int> last_order; //帰りがけ順

void dfs(const Graph &G, int v, int &first_ptr, int& last_ptr){
  //行きがけ順をインクリメントしながらメモしていく
  first_order[v] = first_ptr++;

  seen[v] = true;
  for(auto next_v : G[v]){
    if(seen[next_v]) continue;
    dfs(G,next_v,first_ptr, last_ptr);
  }

  //帰りがけ順をインクリメントしてメモ
  last_order[v] = last_ptr++;
}

int main(){
  int N,M; cin >> N >> M;
  Graph G(N);
  rep(i,M){
    int a,b; cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  seen.assign(N, false);//頂点未訪問に初期化
  first_order.resize(N);
  last_order.resize(N);
  int first_ptr = 0, last_ptr = 0;

  //頂点0からスタートするdfs
  dfs(G,0,first_ptr,last_ptr);
  rep(v,N) cout << v << ": " << first_order[v] << "," << last_order[v] << endl;
}
