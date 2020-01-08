#include<bits/stdc++.h>
using namespace std;
void calculate(long long int a[],long int n,long int s[])
{
    stack <int> stk;;
    int i;
    //int s[n];
    stk.push(0);
    s[0]=1;
    for(i=1;i<n;i++)
    {
        while(!stk.empty() && a[stk.top()] <= a[i])
        stk.pop();
        s[i]=(stk.empty()) ?(i+1) : (i-stk.top());
        stk.push(i);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n,i;
        cin >> n;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        long int s[n];
        calculate(a,n,s);
        for(i=0;i<n;i++)
        {
            cout<< s[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}
