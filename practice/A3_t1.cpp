#include <iostream>
 using namespace std;
int main() {
  
  int N = 3;
  int M = 3;
 
  int** ary = new int*[N];
  for(int i = 0; i < N; ++i)
      ary[i] = new int[M];
 
 
  for(int i = 0; i < N; ++i)
    for(int j = 0; j < M; ++j)
      ary[i][j] = i;
 
  
  for(int i = 0; i < N; ++i)
    for(int j = 0; j < M; ++j)
      std::cout << ary[i][j] << "\n";
 
  return 0;
}
