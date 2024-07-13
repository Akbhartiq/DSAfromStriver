// Here i will be checking if it is possible
#include <bits/stdc++.h>
using namespace std;

vector<int> dist;
struct comp
{
    bool operator()(const int &a, const int &b)
    {
        return dist[a] > dist[b]; // min-heap
    }
};

int main()
{
    // declare the priority_queue
    priority_queue<int, vector<int>, comp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dist.push_back(n - 1 - i);
    }
    for (int i = 0; i < n; i++)
    {
        pq.push(i);
    }
    // get the list later on
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        if (pq.top() == 4)
        {
            dist[0] = 0;
        }
        pq.pop();
    }
    cout << endl;
}