#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[]) {
    long long k;
    scanf("%lld",&k);
    while (k--) {
        long long n,e,d;
        scanf("%lld%lld%lld",&n,&e,&d);
        long long PsubQ = sqrt((n - e * d + 2) * (n - e * d + 2) - (n << 2));
        long long PaddQ = n - e * d + 2;
        long long P = (PsubQ + PaddQ) >> 1;
        long long Q = (n - e * d + 2 - (long long)sqrt((n - e * d + 2) * (n - e * d + 2) - 4 * n)) / 2;
        if (P * Q == n && e * d == (P - 1) * (Q - 1) + 1 && P && Q) {
            printf("%lld %lld\n",min(P, Q),max(P, Q));
        }else {
            printf("NO\n");
        }
    }
    return 0;
}


