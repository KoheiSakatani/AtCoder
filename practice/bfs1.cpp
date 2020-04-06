#include <iostream>
#include <vector>
#include <queue>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
//グラフを扱うときに便利なusing宣言
//2次元配列をGraphという言葉で言い換える的な、シンボルみたいなもん？
using Graph = vector<vector<int> >;

int main(){
  int N,M; cin >> N >> M;
  //頂点数Nのグラフのメモリ確保
  Graph G(N);

  rep(i,M){
    int a,b; cin >> a >> b;
    //無向グラフなので両方からpush_back
    G[a].push_back(b);
    G[b].push_back(a);
  }

  //BFSのデータ構造
  vector<int> dist(N,-1);
  queue<int> que;
  //0という名前の頂点を訪問(dist[i]を0)
  dist[0] = 0;
  que.push(0);

  //BFS 開始
  while(!que.empty()){
    int v = que.front();
    que.pop();

    for(int nv : G[v]){
      if(dist[nv] != -1) continue;

      //新たな頂点nvについて、距離情報を更新し更新した分をキューに追加
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  rep(v,N) cout << v << ": " << dist[v] << endl;
  return 0;
}
