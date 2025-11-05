#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
int i,j,k,n,r,m;
int res;
for(i=0;i<5;i++)
{
    for(k=3;k>=i;k--)
    {

    printf("  ");
    }

    for(j=0;j<=i;j++)
    {

      n=fact(i);
      r=fact(j);
      m=fact(i-j);
      res=n/(r*m);

        printf(" %d ",res);
    }
    printf("\n");
    }
}
   int fact(int a)
{
    int p=1,l;
    for(l=1;l<=a;l++)
    {
        p=p*l;

    }
    return p;

}