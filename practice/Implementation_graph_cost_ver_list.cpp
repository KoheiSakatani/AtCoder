#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

struct edge{
  int to,cost;
};

vector<edge> graph[1050];

int main(){

  int a = 2,b=3,co=6;
  edge e = {b,co};
  graph[a].push_back(e);

  a = 2;b = 4;co = 5;
   edge f = {b,co};
  graph[a].push_back(f);

  rep(i,graph[a].size()){
    edge e = graph[a][i];
    cout << e.to << e.cost << endl;
  }
  return 0;
}
