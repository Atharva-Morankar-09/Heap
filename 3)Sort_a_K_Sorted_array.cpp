
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    priority_queue<int, vector<int>,greater<int>> pq;
    cout<<"Enter value of k : ";
    cin>>k;
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
   return 0; 
}

// T.C. - O(nlogk)
