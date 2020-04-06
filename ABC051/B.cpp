#include <iostream>
#include <vector>

using namespace std;

int main(){
  int K,S; cin >> K >> S;
  int X,Y = 0,Z;
  int pattern = 0;
  Z = K;
  //cout <<"X  Y  Z" << endl;
  //数字を全探索して条件に一致するもののみを抽出
  for(X = 0; X <= K; ++X){
      for(Y = 0,Z = S - X; Z >= 0; --Z,++Y){

        if(X<= K && Y<=K && Z<=K){ pattern++; /*cout << X << "  " << Y << "  " << Z << endl;*/}
      }
    }
    cout << pattern << endl;
  return 0;
}
