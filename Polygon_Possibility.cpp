#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s=0;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int *m=std::max_element(a, a + n); 
        for(i=0;i<n;i++)
        {
            s=s+a[i];
        }
        if(*m<s-*m)
        printf("Yes\n");
        else 
        printf("No\n");
    }
    return 0;
}
