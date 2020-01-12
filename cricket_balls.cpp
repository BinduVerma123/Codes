#include<bits/stdc++.h>
using namespace std;
int hasharray(int arr[], int n, int sum) 
{ 
    unordered_map<int, int> m; 
  
    // Store counts of all elements in map m 
    for (int i=0; i<n; i++) 
        m[arr[i]]++; 
  
    int twice_count = 0; 
  
    // iterate through each element and increment the 
    // count (Notice that every pair is counted twice) 
    for (int i=0; i<n; i++) 
    { 
        twice_count += m[sum-arr[i]]; 
  
        // if (arr[i], arr[i]) pair satisfies the condition, 
        // then we need to ensure that the count is 
        // decreased by one such that the (arr[i], arr[i]) 
        // pair is not considered 
        if (sum-arr[i] == arr[i]) 
            twice_count--; 
    } 
  
    // return the half of twice_count 
    return twice_count/2; 
} 
/*void hasharray(int a[],int n,int k)
{
    
    int c=0;
    int l=0,r=n-1;
    sort(a,a+n);
    while(l<r)
    {
        if(a[l]+a[r]==k)
        c++;
        else if(a[l]+a[r] <k)
        l++;
        else
        r--;
    }
    //return c;
    cout << c <<endl;
}*/
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,k;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        cin >> k;
       /* sort(a,a+n);
        /*for(i=0;i<n;i++)
        {
            cout << a[i] << " " ;
        }
        int l=0,r=n-1,c=0;
        while(l<r)
        {
            if((a[l]+a[r])==k)
            {
            c++;
                l++;
                r--;
            }
            else if(a[l]+a[r]<k)
            l++;
            else
            r--;
        }*/
       
       int y= hasharray(a,n,k);
        cout << y << endl;
    }
    return 0;
}
