#include <iostream>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        //[i]=a[i]+b[i];
        printf("%d ",a[i]+b[i]);
    }
    /*for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }*/
}
