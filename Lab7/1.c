#include<stdio.h>
int ciag(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    return ciag(n-1)-2*ciag(n-2);
}
int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", ciag(n));
    return 0;
}
