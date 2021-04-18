#include <bits/stdc++.h>
using namespace std;
int MAX1=0,MAX2=0,h=1;
void findPair(int arr[], int n, int sum)
{
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
           //MAX=max(MAX,arr[low] + arr[high]);
           //cout<<arr[low]<<"  "<<arr[high]<<endl;
        MAX1= arr[low];
        MAX2= arr[high];
       // break;
 
        }
 
        (arr[low] + arr[high] < sum)? low++: high--;
       // cout<<low<<"   "<<high<<endl;
       // h++;
    }
 
 
 
}
int main()
{
 
    int a,b,n,sum;
    cin>>n>>sum;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    findPair(arr, n, sum);
 
    if(MAX1==0&&MAX2==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
 
           auto it=std::find(v.begin(),v.end(),MAX1);
            if(it!=v.end())
            { int x=it-v.begin()+1;
                cout<<x<<" ";
               // v.erase(v.begin()+x-1);
               v[x-1]=0;
            }
            auto it1=std::find(v.begin(),v.end(),MAX2);
            if(it1!=v.end())
            {
                cout<<it1-v.begin()+1<<endl;
            }
 
 
 
       // cout<<MAX1<<" "<<MAX2<<endl;
    }
    return 0;
}
