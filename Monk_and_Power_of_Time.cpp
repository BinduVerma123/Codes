#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,temp;
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
    i=0;
    while(i<n)
    {
        if(a[i]==b[i])
        {
            i=i+1;
            c=c+1;
        }
        else
        {
        for(j=i;j<n-1;j++)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        c=c+1;
        }
    }
    printf("%d",c);
    return 0;
}
