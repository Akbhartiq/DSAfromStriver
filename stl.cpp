#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

// Get the rough Idea of the STL
/*
    STL are divided into 4 parts
    1.Algorithms
    2.Containers
    3.Functions
    4.Iterators

*/

// pairs
void explainPair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> tempPair = {1, {2, 3}};
    cout << tempPair.first << " " << tempPair.second.first << " " << tempPair.second.second << endl;

    // cout << tempPair << endl; -> It's wrong
}

// Vectors
void explainVectors()
{
    vector<int> v;

    // push an element
    v.push_back(1);
    v.emplace_back(2); // time efficient

    vector<pair<int, int>> vecPair;
    vecPair.push_back({1, 3});
    // vecPair.emplace_back({1,3}); -> It is wrong
    vecPair.emplace_back(1, 3);

    vector<int> vec(5, 100); // {100,100,100,100,100}
    vector<int> vecZero(5);  //{*,*,*,*,*}

    // Copying Vector
    vector<int> copy(vec);

    // Iterators
    vector<int>::iterator itBegin = vec.begin();
    vector<int>::iterator itEnd = vec.end();
    vector<int>::reverse_iterator itRbegin = vec.rbegin();
    vector<int>::reverse_iterator itRend = vec.rend();

    // To print the last element Directory
    cout << vec.back() << endl;

    // Delete a Single Element
    v.erase(v.begin() + 1); // Delete the 2nd Element

    // Delete the collections of element
    v.erase(v.begin() + 1, v.begin() + 4); //[start,end)

    // Insert Function
    vector<int> value(2, 100);

    // Inserting a single element
    v.insert(v.begin(), 300);

    // Inserting the range of element
    v.insert(v.begin(), 2, 5); /*Will get 2 5s at the beginning*/

    // Copying part of vectors
    v.insert(v.begin(), vec.begin(), vec.end());

    // Get the Size
    v.size();

    // Get the last element popped off
    v.pop_back();

    // Swap the vectors
    v.swap(vec);

    // Is your vector empty
    v.empty();

    // Clear the vector
    v.clear();
}

// list
void explainList()
{
    list<int> ls; // Declare a list

    // back Method
    ls.push_back(2);
    ls.emplace_back(3);

    // front Method
    ls.push_front(4);
    ls.emplace_front(6);
}

// Deque
void explainDeque()
{
    deque<int> dq;

    // back Method
    dq.push_back(1);
    dq.emplace_back(2);

    // front Method
    dq.push_front(3);
    dq.emplace_front(4);

    // pop method
    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
}

// Stack(LIFO) : Constant Time DS
void explainStack()
{
    stack<int> st;
    st.push(3);    //{3}
    st.push(4);    //{4,3}
    st.emplace(5); //{5,4,3}

    st.top(); // top Element
    st.pop(); // to remove elements

    st.size();

    st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue(FIFO) : Constant Time DS
void explainQueue()
{
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.pop();      //{2}
    q.emplace(4); //{2,4}
    q.front();    // These are Actual
    q.back();
}

// Priority Queue : Maximum Element Stays at the top
void explainPQ()
{
    priority_queue<int> pq;
    pq.push(1); // log(n)
    pq.push(10);
    pq.push(3);
    pq.push(4);

    pq.top(); // const

    pq.pop(); // log(n)

    pq.size();

    // Get Min Heap
    priority_queue<int, vector<int>, greater<int>> minPq;
    pq.push(4);
    pq.top();
}

// set
void explainSet()
{
    /*It stores unique things in sorted fashion.
      A tree is maintained to implement the Set
      log(n) time complextiy
    */
    set<int> st;
    st.insert(3);  //{3}
    st.emplace(4); //{3,4}
    st.insert(1);  //{1,3,4}
    st.insert(4);  //{1,3,4}

    // begin,end,rbegin,rend,swap,empty are same

    // Find method
    st.find(3); // returns an iterator pointing to 3
    st.find(6); // returns set.end()

    st.erase(3);          // takes log(n) time
    st.erase(st.find(3)); // takes const time

    st.erase(st.find(3), st.find(4)); //[it1,it2)

    st.count(1); // Either 1 or 0
}

// multiset
void explainMultiSet()
{
    /*Same as Set , in addition it stores duplicate element also*/
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //{}

    auto it = ms.find(1); // gives iterator

    ms.erase(it); // Erase only one occurences
}

// Unorder set
void explainUnordeSet()
{
    /*Stores only unique things, T.C=O(1),in Worst-Case O(1)*/
    // All operations are same as Set-Container
}

// map
void explainMap()
{
    /*Hashing:key-value Pair,key-can be anythign, value-can be anything*/
    map<int, int> mp;
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    mp[1] = 2; //{1,2}
    mp.emplace(3, 1);
    mp.insert({2, 4});
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Map stores unique keys in sorted order

    // finding the key
    auto it1 = mp.find(1);

    // lower_bound and upper Bound
    auto it2 = mp.lower_bound(2);
    auto it3 = mp.upper_bound(3);
}

// MultiMap
void explainMulitMap()
{
    // Can Store the Same keys in sorted fashion
}

// Unordered Map
void explainUnorderdMap()
{
    // Same as set and unordered set
}
int main()
{
    return 0;
}