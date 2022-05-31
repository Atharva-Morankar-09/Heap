
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    priority_queue<int, vector<int>, greater<int>> pq;
    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pq.push(arr[i]);
    }

    int cost = 0;
    while (pq.size() > 1)
    {
        int curr = pq.top();
        pq.pop();
        int snd = pq.top();
        pq.pop();
        cost += curr + snd;
        pq.push(curr + snd);
    }
    cout << "The minimum cost to join ropes is : " << cost;
    return 0;
}
