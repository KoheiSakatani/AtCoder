#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
const int INF = 1<<29;

int main(){
  int D,G; cin >> D >> G;
  vector<int> p(D),c(D),d;
  int min = INF, sum = 0;
  for(int i = 0; i < D; ++i){
    cin >> p[i] >> c[i];
    sum += p[i];
  }

  for(int bit = 0,t = -1; bit < pow(2,D); ++bit){
    int tmp = G,count = 0;
    d.clear();
    for(int k = 0; k < D && tmp > 0; ++k){
      if(bit >> k & 1){
        tmp -= 100*(k+1)*p[k]+c[k];
        count += p[k];
      }
      else d.push_back(k);
    }
    for(int i = d.size()-1; i >= 0; --i){
      if(tmp <= 0) break;
      for(int j = 0; j < p[d[i]] && tmp > 0; ++j){
        count++;
        tmp -= (d[i]+1)*100;
      }
    }
    if(tmp <= 0 && min > count) min = count;
  }
  cout << min << endl;
  return 0;
}
