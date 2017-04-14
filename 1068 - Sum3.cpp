#include <cstdio>

using namespace std;

int main() {

 int N;

 scanf("%d", &N);

 if(N == 0 || N == 1 ) printf("%d\n",1);

    else 

    (N > 1) ? printf("%d\n", N*(N+1)/2) : printf("%d\n", N*(1-N)/2 + 1);
    
 return 0;
}