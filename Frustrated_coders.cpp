#include<bits/stdc++.h>
#include <iostream>
using namespace std;
long long int top=-1;
void push(int a[],int x,int n)
{
    if(top==n-1)
    cout << "overflow" << endl;
    else
    {
        top=top+1;
        a[top]=x;
    }
}
bool isEmpty()
{
    if(top== -1)
    return true;
    else
    return false;
}
void pop()
{
    if(isEmpty())
    {
        //return a[top];
       cout << "end" << endl;
    }
    else
    top=top-1;
}
int topelement(int a[])
{
    return a[top];
}
int main()
{
  long long int n,i,sum=0;
  scanf("%lld",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      cin >> a[i];
  }
  sort(a,a+n);
  int s[n];
  for(i=0;i<n;i++)
  {
      if(isEmpty())
      {
          push(s,a[i],n);
      }
      else{
          int index=top,flag=0;
      if(topelement(s)<a[i])
      {
          pop();
          push(s,a[i],n);
      }
      else{
          while(!isEmpty())
          {
              if(topelement(s)<a[i])
              {
                  flag=1;
                  s[top]=a[i];
                  break;
              }
              top--;
          }
          top=index;
          if(flag==0)
          {
              push(s,a[i],n);
          }
      }
      }
      
  }
  while(!isEmpty())
  {
      sum=sum+topelement(s);
      pop();
  }
  printf("%d",sum);
return 0;
}
