#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

vector<int> graph[1050];

int main(){
  graph[2].push_back(7); //頂点2から頂点7へ
  graph[3].push_back(5);//頂点3から頂点5へ
  graph[3].push_back(2);//頂点3から頂点2へ

  cout << graph[2][0] << endl;//7
  cout << graph[3][0] << endl;//5
  cout << graph[3][1] << endl;//2

  int a = 3;
  rep(i,graph[a].size()){
    //頂点aに隣接している全ての頂点を最小回数で探索可能
    cout << graph[a][i] << ' ';
  }
  return 0;
}
