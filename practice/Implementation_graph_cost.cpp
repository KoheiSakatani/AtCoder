#include <iostream>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int graph[1010][1010];

int main(){
  int V,E;
  cin >> V >> E;

  graph[1][3] = 5;

  //無向グラフは両方から伸ばす
  graph[3][4] = 10;
  graph[4][3] = 10;

  rep(i,E){
    int a,b,cost;
    graph[a][b] = cost;
    graph[b][a] = cost;

  }

  int g = 4;

  rep(i,E){
    if(graph[1][i] != 0 && graph[i][g] != 0 && graph[1][i] + graph[i][g] <= 15){
      cout << "goal" << endl;
      return 0;
    }
    cout << "no" << endl;
  }
  return 0;

}
