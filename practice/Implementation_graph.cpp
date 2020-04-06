#include <iostream>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

//グローバル変数にすると全て初期化される
bool graph[1010][1010];

int main(){
  int V,E;//Vは頂点数、　Eは辺の数
  cin >> V >> E;

  graph[1][3] = true;//町1から町3へ辺が伸びている

  //無向グラフは両方から書いておく
  graph[3][4] = true;
  graph[4][3] = true;

  //入力例
  rep(i,E){
    int a,b;
    cin >> a >> b;
    graph[a][b] = true;
    graph[b][a] = true;
  }

  int g = 2;
  rep(i,E){
    if(graph[1][i] == true && graph[i][g] == true){
      cout << "GOAL" << endl;
      return 0;
    }
    cout << "NO" << endl;
  }
  return 0;
}
