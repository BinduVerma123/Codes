#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    string a;
    cin >> a;
    stack<char> s;
    s.push(a[0]);
    for(i=1;i<n;i++)
    {
        if(s.size()>0)
        {
            if(s.top()==a[i])
            s.pop();
            else
            s.push(a[i]);
        }
        else
        s.push(a[i]);
    }
    cout << s.size() << endl;
     j=s.size()-1;
    char w[s.size()];
    while(!s.empty())
    {
       w[j]=s.top();
       s.pop();
       j--;
    }
    for(i=0;i<sizeof(w);i++)
    {
        cout << w[i];
    }
    return 0;
}
