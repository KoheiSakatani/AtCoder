#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

typedef long long ll;
ll N,D,c = 0;
int X[100][100];
double sum = 0;

int main(){
  cin >> N >> D;
  rep(i,N) rep(j,D) cin >> X[i][j];
  rep(i,N-1){
    for(int j = i+1; j < N; ++j){
      sum = 0;
      rep(k,D) sum += pow(X[i][k]-X[j][k],2);
      sum = sqrt(sum);
      if(floor(sum) == ceil(sum)) c++;
    }
  }
  cout << c << endl;
  return 0;
}
