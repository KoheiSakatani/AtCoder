#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n,k; cin >> n >> k;
  string S; cin >> S;
  int sabori_count = 0,ans = 0;
  vector<int> c(3,0);
  for(int i = 0; i < n; ++i){
    if(S[i] == 'S'){
      sabori_count++;
      if(sabori_count == 3){
        c[sabori_count-1]++;
        sabori_count = 0;
      }
    }
    else if(S[i] == '.'){
      ans++;
      if(sabori_count != 0) c[sabori_count-1]++;
      sabori_count = 0;
    }
  }
  for(int i = 0; i < 3; ++i){
    cout << "c[" << i << "] = " << c[i] << endl;
  }
  for(int i = 2; i >= 0; --i){
    for(int j = 0; j < c[i]; ++j){
      if(k > 0){
        ans += i+1;
        k--;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
