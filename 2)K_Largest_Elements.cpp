
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<"Enter the value of k : ";
    cin>>k;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    
    cout<<"The K largest elements are : ";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
   return 0; 
}

// T.C. - O(nlogk)
