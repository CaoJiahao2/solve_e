#include <stdio.h>

double jiecen(int n) {
    if(n==1||n==0)
        return 1.0;
    return n* jiecen(n-1);
}

int main() {
    int n,i=0;
    double s,e=0.0;
    printf("input:\n");
    scanf("%d",&n);
    while (i<=n){
        s=1/jiecen(i);
        e+=s;
        i++;
    }
    printf("for count times=%d,e= %f",n,e);
}