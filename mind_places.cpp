#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,i,j,f,g;
    cin >> n;
    cin >> m;
    long long int a[n][m];
    long long int x,y;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          cin >> a[i][j];  
        }
    }
    cin >> q;
    while(q--)
    {f=0,g=0;
        cin >> x;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==x)
                {f=1;
                break;
                }
            }
            if(f==1)
            {g=1;
            break;
            }
        }
        if(g==1)
        {
        cout << i << " " << j << endl;
        i=j=0;
        }
        else
        cout << "-1" <<" "<< "-1" << endl;
    }
    return 0;
}
