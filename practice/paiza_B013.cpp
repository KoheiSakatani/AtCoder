#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
  int a,b,c,idx;
  cin >> a >> b >> c;
  int N; cin >> N;
  vector<int> h(N),m(N);
  rep(i,N) cin >> h[i] >> m[i];
  int timeout = 540, traintime; //9:00を0:00から分で換算
  timeout = 540 - b - c;
  rep(i,N){
    int tmp = 60*h[i] + m[i];
    if(timeout <= tmp) break;
    traintime = tmp;
  }
  if((traintime - a)/60 < 10) cout << "0";
  cout << (traintime - a)/60 << ":" << (traintime - a)%60 << endl;
  return 0;
}
