//素数判定器として有名なエラトステネスのふるい
#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector<bool> p(N,true);

  for(int i = 2; i < sqrt(N); ++i) if(p[i]) for(int j = 0; i * (j+2) < N; ++j) p[i*(j+2)] = false;

  for(int i = 2; i < N; ++i) if(p[i]) cout << i << endl;
  return 0;
}
