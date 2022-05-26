
#include<iostream>
#include<map>
#include<queue>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    map<int,int> mp;
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    cout<<"Enter the value of k : ";
    cin>>k;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(auto x=mp.begin();x!=mp.end();x++)
    {
        pq.push({x->second,x->first});
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    cout<<"The top "<<k<<" frequent numbers & thier frequency is : "<<endl;
    while(!pq.empty())
    {
        cout<<pq.top().second<<" - "<<pq.top().first<<" times"<<endl;
        pq.pop();
    }
   return 0; 
}
