#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,result=0;
    cin >> n;
    long int a[n];
    stack <int>s,k;
    s.push(-1);
    k.push(0);
    for(i=0;i<n;i++)
       {
        cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            //c=1;
            if(a[i]>0)
            {
               s.push(i);
               k.push(a[i]);
           // c++;
            }
           // else if(a[i]<0)
           // cout << abs(a[i]) << endl;
            else if(a[i] < 0 && abs(a[i])==k.top())
              {
                  s.pop();
                  k.pop();
                 // int a=s.top();
                  //cout << a << endl;
               //cout << s.pop() << endl;;
                if(!s.empty())
                 result = max(result,i-s.top());
             else
               {
                s.push(i);
                k.push(a[i]);
                }
              }
            else
            {
                s.push(i);
                k.push(a[i]);
            }
        }
            cout << result;
        return 0;
}
