#include<iostream>
using namespace std;
int main()
{
    int long a[1000000],n,c=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        continue;
        c=c+1;
    }
    cout << c;
    return 0;
}
