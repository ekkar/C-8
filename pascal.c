
#include <stdio.h>

int main()

{
int N=10;
int a[N][N+1];
a[0][0] = 1;
for(int i = 0; i < 35/2; i++){
printf(" ");}
printf("%d\n", a[0][0]);
a[1][0] = 1;
a[1][1] = 1;
for(int i = 0; i < 35/2-1; i++){
    printf(" ");
}
printf("%d", a[1][0]);
printf(" ");
printf("%d\n", a[1][1]);

int k = 2;
while (k<=N) {
    a[k][0]=1;
    int t = k;
    for(int j=0; j < 35/2-t; j++){
        printf(" ");}
    printf("%d", a[k][0]);
    printf(" ");
    
    for (int i=1;i<=k-1;i++){
        a[k][i]=a[k-1][i-1]+a[k-1][i];
        printf("%d", a[k][i]);
        printf(" ");
    }
    
    a[k][k]=1;
    printf("%d\n", a[k][k]);
    

    k++;
}

return 0;

}
