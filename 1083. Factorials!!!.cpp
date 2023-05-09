#include <iostream>

using namespace std;

int n;

int main(int argc, char const *argv[]) {
  cin>>n;
  char c;
  int k = 0;
  while(true){
    c = getchar();
    if(c=='\n'){
      break;
    }
    if(c=='!')k++;
  }
  int ans = 1;
  while(n>0){
    ans = ans * n;
    n = n - k;
  }

  cout<<ans;
  return 0;
}
