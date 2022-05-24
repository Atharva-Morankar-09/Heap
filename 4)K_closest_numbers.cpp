
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, x, k;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elemetns of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you are searching for : ";
    cin >> x;
    cout << "Enter the number of close numbers you want : ";
    cin >> k;

    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push({abs(arr[i] - x), arr[i]});
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    cout << "The " << k << " closest numbers to " << x << " are : ";
    while (!pq.empty())
    {
        cout << pq.top().second << " ";
        pq.pop();
    }
    return 0;
}
