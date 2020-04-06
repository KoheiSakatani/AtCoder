#include <iostream>
#include <vector>
using namespace std;

void DFS(int idx, vector<vector<int> >& a, vector<int>& c){
  c[idx] = a[idx].size();
  if(c[idx] == 0) return;
  for(int j = 0; j < a[idx].size(); ++j){
    DFS(a[idx][j],a,c);
    c[idx] += c[a[idx][j]];
  }
}

int main(){
  int N; cin >> N;
  vector<int> c(N+1,-1);
  vector<vector<int> > a(N+1);
  for(int i = 2; i <= N; ++i){
    int tmp; cin >> tmp;
    a[tmp].push_back(i);
  }
  DFS(1,a,c);
  for(int i = 1; i <= N; ++i ) cout << c[i] << endl;
}
