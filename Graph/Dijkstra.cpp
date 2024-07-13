//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    // Let's implement the Dijsktra algorithm
    vector<pair<long long int, long long int>> dijsktra(int source, int n, int m, vector<vector<pair<int, int>>> &edges)
    {
        // Let's code
        priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;
        vector<pair<long long int, long long int>> nodes; //(dist,parent):1e18 max dist and -1 no parent
        for (int i = 0; i < n; i++)
        {
            if (i)
            {
                nodes.push_back({1e18, -1});
            }
            else
            {
                nodes.push_back({0, -1});
            }
        }
        pq.push({0, 0}); // dist,node
        while (!pq.empty())
        {
            // get the top-Element
            auto val = pq.top();
            pq.pop();
            for (int i = 0; i < edges[val.second].size(); i++)
            {
                int a = edges[val.second][i].first;
                int b = edges[val.second][i].second;
                if (nodes[a].first > nodes[val.second].first + b)
                {
                    // cout << "If i am true" << endl;
                    nodes[a].first = nodes[val.second].first + b;
                    nodes[a].second = val.second;
                    pq.push({nodes[val.second].first + b, a});
                }
            }
        }
        return nodes;
    }
    vector<int> shortestPath(int n, int m, vector<vector<int>> &edges)
    {
        // Code here
        // Let's see the qn like finding min dist betweent 0 and n-1
        // create adjaceny list
        vector<vector<pair<int, int>>> adj(n);
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0] - 1;
            int b = edges[i][1] - 1;
            int c = edges[i][2];
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }
        vector<pair<long long int, long long int>> ret = dijsktra(0, n, m, adj);
        // cout << "Result:" << endl;
        // cout << "Nodes    Distance    Parent" << endl;
        // for (int i = 0; i < ret.size(); i++)
        // {
        //     cout << "[" << i << "] :        " << ret[i].first << "         " << ret[i].second << endl;
        // }

        if (ret[n - 1].second == -1)
        {
            return {-1};
        }
        vector<int> ans;
        long long int val = n - 1;
        while (val != -1)
        {
            ans.push_back(val + 1);
            val = ret[val].second;
        }
        ans.push_back(ret[n - 1].first);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i)
        {
            vector<int> temp;
            for (int j = 0; j < 3; ++j)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
            mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
            mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        int ans = 0;
        for (int i = 2; i < res.size(); i++)
        {
            ans += mp[{res[i], res[i - 1]}];
        }
        if (ans == res[0])
        {
        }
        else if (res.size() == 1 && res[0] == -1)
            ans = res[0];
        else
            ans = -2;
        cout << ans << endl;
    }
}

// } Driver Code Ends