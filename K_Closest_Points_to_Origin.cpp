
#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n][2];
    cout << "Enter the x and y co-ordinates :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    
    cout << "Enter the value of k : ";
    cin >> k;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1], i});
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    
    cout << "The point closest to origin are :" << endl;
    while (!pq.empty())
    {
        cout << "(" << arr[pq.top().second][0] << "," << arr[pq.top().second][1] << ")" << endl;
        pq.pop();
    }
    return 0;
}