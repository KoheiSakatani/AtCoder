//n!通り回したいときに使うライブラリ
#include <bits/stdc++.h>
using namespace std;
int N = 100;
bool used[100];
int perm[100];
int perm2[100];


//{0,1,2,…,n-1}の並び替えをn！通り生成

void permutation(int pos, int n){
  if(pos == n) return;
  for(int i = 0; i < n; ++i){
    if(!used[i]){
      perm[pos] = i;
      //iを使ったのでフラグをtrueにする
      used[i] = true;
      permutation(pos+1,n);
      //戻ってきたらフラグをfalseにする
      used[i] = false;
    }
  }
  return;
}

//重複があっても全ての順列を生成する
//next_permutationは辞書順で次の順列を生成する

void permutation2(int n){
  for(int i = 0; i < n; ++i) perm2[i] = i;
  do{}while(next_permutation(perm2, perm2 + n));
  return;
}

int main(){

  permutation2(5);
  for(int i = 0; i < N; ++i){cout << "perm2[" << i << "] = " << perm2[i] << endl;}
}
