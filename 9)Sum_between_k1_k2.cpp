
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, k1, k2;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter k1 : ";
    cin >> k1;
    cout << "Enter k2 : ";
    cin >> k2;

    priority_queue<int> pq;

    // int k1v,k2v;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k1)
        {
            pq.pop();
        }
    }

    k1 = pq.top();

    while (!pq.empty())
    {
        pq.pop();
    }

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k2)
        {
            pq.pop();
        }
    }

    k2 = pq.top();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k1 && arr[i] < k2)
        {
            sum += arr[i];
        }
    }
    cout << "Sum is : " << sum;
    return 0;
}
