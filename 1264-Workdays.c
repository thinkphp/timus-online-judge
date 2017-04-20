#include <stdio.h>
#define ULL unsigned long long

int main() {
    ULL N,M;
    scanf("%llu %llu", &N, &M);
    printf("%llu", N*(M+1));
return(0);
}