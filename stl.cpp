#include <bits/stdc++.h>
using namespace std;

//pairs comes under UTILITY library
void explainPair(){
    pair<int, int> p = {1,9};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p2 = {5, {6,9}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].second << " " << arr[0].first << " " << arr[2].first << endl;
}


//vector
void explainVector(){
    vector<int> v;                      //{1, 2}
    v.push_back(1);                     
    v.emplace_back(2);
    
    vector<pair<int, int>> vp;          //{{1, 2}, {5, 6}}
    vp.push_back({1,2});
    vp.emplace_back(5,6);
    
    vector<int> v2(5,100);               //{100, 100, 100, 100, 100}
    vector<int> v3(5);                   //{0, 0, 0, 0, 0}
    
    vector<int> v4(v3);                 //copy vector
  
    vector<int>::iterator it = v.begin();      
    it++;
    cout << *(it) << " ";                       //v.second  = 2
    vector<int>::iterator it2 = v.end();        //after end = 0 
    cout << *(it2) << " " << endl;  
    cout<<v[0]<<" "<<v.at(0)<<endl;             // 1 1
    cout<<v.back()<<" "<<endl;                        //2
    vector<int>::reverse_iterator it3 = v.rend();       //0
    cout << *it3 << " ";
    vector<int>::reverse_iterator it4 = v.rbegin();     //2
    cout << *it4 << " " << endl;
    
   for(vector<int>::iterator it5 = v.begin(); it5!=v.end(); it5++){
      cout << *(it5) << " " << endl;                    //1 2
   }
   for(auto it6 = v.begin(); it6 != v.end(); it6++){    //c++ understands the datatype automatically with auto keyword
      cout << *(it6) << " " << endl;                    //1 2
   }
   
    //   {10, 20, 30, 40, 50} 
   v.erase(v.begin()+1);    //{10, 30, 40, 50}
   v.erase(v.begin()+1, v.begin()+3);   //{10, 50} (start, end) (1 means 1st place no. will be erased and 3 means end so one before end that is 2nd place no. will be erased)
    
    vector<int>v_(2, 100);       //{100, 100}
    v_.insert(v_.begin(),300);    //{300, 100, 100}
    v_.insert(v_.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    
    vector<int> copy (2, 50); // (50, 50)
    v_.insert(v_.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << v_.size(); 
    v_.pop_back(); //(removes element from back)
    //v1-> {8,9}    v2-> {1,2}
    v1.swap(v2);  // v1-> {1,2}      v2-> {8,9}
    v_.clear();
    cout << v_.empty();
}    
 
    
//List
void explainList(){
    list <int> ls;
    ls.push_back(2);    // (2)
    ls.emplace_back(4); // (2, 4)
    ls.push_front(5);   // (5, 2, 4);
    ls.emplace_front(); //(2, 4);
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}    


//DeQue
void explainDeque(){
    deque <int> dq;
    dq.push_back(1);        // {1}
    dq.emplace_back(2);     // {1, 2}
    dq.push_front(4);       // {4, 1, 2}
    dq.emplace_front(3);    // {3, 4, 1, 2}
    dq.pop_back();          // {3, 4, 1}
    dq.pop_front();         // {4, 1}
    dq.back();
    dq.front();

// rest functions same as vector
// begin, end, rbegin, rend, clear, insert, size, swap
}


//Stack
void explainStack() {
    Stack<int>st;
    st.push(1);         // (1) LIFO
    st.push(2);         // (2, 1)
    st.push(3);         // (3, 2, 1)
    st.push(3);         // (3, 3, 2, 1)
    st.emplace(5);      // (5, 3, 3, 2, 1)
    cout << st.top();   // prints 5 "** st[2] is invalid **"
    st.pop();           // st looks like (3, 3, 2, 1)
    cout << st.top();   //3
    cout << st.size();  //4
    cout << st.empty();
    stack<int>st1, st2;
    st1.swap(st2);
}


//Queue
void explainQueue() {
    queue<int> q:
    q.push(1);          // {1}
    q.push(2);          // {1, 2}
    q.emplace(4);       // {1, 2, 4}
    q.back() += 5
    cout << q.back();   // prints 9
    // Q is {1, 2, 9}
    cout <<< q.front(); // prints 1
    q.pop();            // {2, 9}
    cout <<<< q.front();// prints 2
    // size swap empty same as stack
}


//Priority Queue
void explainPQ() {
    priority_queue<int>pq;
    pq.push(5);          // (5)
    pq.push(2);          // (5, 2)
    pq.push(8);          // (8, 5, 2)
    pq.emplace(10);      // (10, 8, 5, 2)
    cout << pq.top();    // prints 10
    pq.pop();            // (8, 5, 2}
    cout << pq.top();    // prints 8
// size swap empty function same as others

// Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq:
    pq.push(5);      // {5}
    pq.push(2);      // {2, 5}
    pq.push(8);      // {2, 5, 8)
    pq.emplace(10);  // (2, 5, 8, 10)
    cout << pq.top();// prints 2
}


//Set
void explainSet() {
    set<int>st;
    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // {1, 2}
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4)
// begin(), end(), rbegin(), rend(), size(),
// empty() and swap() are same as those of above

// {1, 2, 3, 4, 5) 
    auto it = st.find(3);
// (1, 2, 3, 4, 5) 
    auto it = st.find(6);
// (1, 4, 5)
    st.erase(5);            // erases 5 // takes logarithmic time

    int cnt = st.count(1);
    
    auto it = st.find(3);
    st.erase(it);
    
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);     //after erase {1,4,5} {first,last}
    
//lower_bound and upper_bound fn() works same way vector does   
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}


//MultiSet
void explainMultiSet() {
// Everything is same as set only stores duplicate elements also
    multiset<int>ms;
    ms.insert(1);    // {1}
    ms.insert(1);    // {1, 1)
    ms.insert(1);    // {1, 1, 1}
    ms.erase(1);     // all 1's erased

    int cnt = ms.count(1);
// only a single one erased
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1)+2);
// rest all function same as set
}


//Unordered Set
void explainUSet() {
    unordered_set<int> st;
// lower_bound and upper_bound function does not works in this, rest all functions are same
// it does not stores in any particular order it has a better complexity than set in most cases, except some when collision happens
}


//Map
void explainMap() {
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map< pair<int, int>, int> mpp;
    mpp[1] = 2;
    mpp.emplace({3, 1));
    mpp.insert((2, 4));
    mpp[{2,3}] = 10;
    for(auto it: mpp) { 
        cout <<<< it.first << " " << it.second << endl;
    }
    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;
    auto it = mpp.find(5);
    
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
// erase, swap, size, empty, are same as above
}

void explainMultimap() {
// everything same as map, only it can store multiple keys only mpp[key] cannot be used here
}

void explainUnorderedMap() {
// same as set and unordered_Set difference.
}


//Algorithm
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(pl.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(pl. first > p2.first) return true;
    return false;
}

void explainExtra() {
    sort(a, a + n);
    sort(v.begin(), v.end());
    sort(a+2, a+4);
    sort(a, a+n, greater<int>);
    pair<int, int> a[] = {{1,2}, (2, 1), (4, 1}};
// sort it according to second element
// if second element is same, then sort
// it according to first element but in descending
    sort(a, a+n,comp);
// (4,1), (2, 1), (1, 2));
    int num = 7;
    int cnt =_builtin_popcount();
    long long num = 165786578687;
    int cnt = _builtin_popcountll();
    string s = "123";
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    int maxi = *max_element(a, a+n);
}

    
int main() {
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}