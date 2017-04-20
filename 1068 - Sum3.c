#include <cstdio>

using namespace std;

int main() {

 int N;

 scanf("%d", &N);

 if(N == 0 || N == 1 ) printf("%d\n",1);

 else {

      if(N > 0) {

                printf("%d\n", N*(N+1)/2);

      } else {

          int i, s = 0;

          for(i = 1; i >= N; i--) s += i;         
 
          printf("%d\n", s);
      }
 }
    
 return 0;
}