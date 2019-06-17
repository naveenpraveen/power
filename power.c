#include <stdio.h>
int main()
{
    int i,N,k,ans=1;
    scanf("%d %d",&N,&k);
    for(i=0;i<k;i++){
     ans=N*ans;}
     printf("%d",ans);
    return 0;
}
