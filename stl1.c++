#include<vector>
#include<iostream>
using namespace std;

//PAIRS
 void explainPair() {

    pair<int,int> p = {1,3};
    cout<<p.first<<"print "<<p.second;

    pair<int, pair<int,int>> p = {1,{2,3}};
    cout << p.first<<" " << p.second.second <<" "<<p.second.first;

    pair<int,int> arr[] = { {1,2}, {2,5}, {5,1}};
    cout <<arr[1].second;
 }

 //VECTOR

 vector<int> datatypesName; // create empty container { }

 v.push_back(1); // give 1 in empty container {1} , agar araay me elemet add krna h to ye use krte hai 
 v.emplace_back(2); // it increase its size {1,2}

 vector<pair<int,int>>vec; // here we defining pair in vector

 v.push_back({1,2}); //here push back ko hum { } me rakhenge jab hi pair me hoga 
 v.emplace_back(1,2); // ise hum ( ) hi rakh denge to ise code me automatically pair me assume kar liya jaayega 


vector<int> v(5, 100); //container with lot of elements {100,100,100,100,100}

vector<int> v(5); //{0,0,0,0,0}

vector<int> v1(5, 20); //{20,20,20,20,20}
vector<int> v2(v1); // v1 ko print krwa rhe hai v2 me 

// to access an array element in VECTOR we use similar case like in array a[0],a[1],etc , the other case is iteration

vector<int>::iterator kashish = v.begin(); // v.begin hame memory ka adress dega element ka nahi example {20,10,15,6,7}
kashish++;
cout<<*(kashish)<<" "; // here star print the adress of memory , it give 10

kashish = kashish + 2;
cout<<*(kashish) <<" "; // print 6

// for max value syntax = int max_value =max_element(datatypename.begin(), datatypename.end())

// another iterator 

vector<int>::iterator kashish = v.end(); // ex = {10,20,30,40,50} , v.end jo hai ye 50 ke baad aayega 

for( auto kashish = v.begin(); kashish != v.end(); kashish++){  // it will print all vector element of the array
    cout<<*(kashish)<<" " ;
}

for(auto kassu : v ) {
    cout<< kassu <<" " ; //print all vector element of array
}

// {10,20,30,40}
v.erase(v.begin() + 1 ); //it will erase single element 20 from the array and the new array will be { 10,30,40 }

// {10,20,30,40,50}
v.erase(v.begin() + 2, v.begin() + 4); // new array { 10,20,50}

//INSERT function

vector<int> v(2, 100); // {100,100}
v.insert(v.begin() , 300); // {300,100,100}
v.insert(v.begin() + 1 , 2, 10); // {300,10,10,100,100} , 10 element , 2 size mtlb kitna element daalna h , position 1


// {10,20}
cout<< v.size(); // elements/size = 2 

// {10,20}
v.pop_back(); // delete 20 , new element is 10

// v1-->{10,20} , v2-->{30,40}
v1.swap(v2); // v1--> {30,40} , v2--> {10,20}

v.clear(); // clear the entire vector

cout<< v.empty();

//LISTS 

void explainList() {
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_front(); // {2,4}

    // all the function similar to the vector 
    //begin , end , rbegin , rend , clear , insert , size , swap
}

//DEQUE

void explainDeque() {
    deque<int> dq; 

    dq.push_back(2); //{2}
    dq.emplace_back(4); // {2,4}

    dq.push_front(5); // {5,2,4}
    dq.emplace_front(8); // {8,5,2,4}

    dq.pop_back(); // {8,5,2}
    dq.pop_front(); //{5,2}

    dq.back();

    dq.front();

    // all the function similar to the vector 
    //begin , end , rbegin , rend , clear , insert , size , swap
}

//STACK

void explainStack() {
    stack<int> st ;

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    cout<<st.top(); //prints 5

    st.pop(); // delete 5 , new stack = { 4,3,2,1}

    cout<<st.top(); //4

    cout<<st.size(); // element / size 4

    cout<<st.empty(); //false

// st1-->{10,20} , st2-->{30,40}
    stack<int> st1 , st2;// st1--> {30,40} , st2--> {10,20}
    st1.swap(st2);
} 

void explainQueue() {
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(3); //{1,2,3}

    q.back() +=5 
    cout<<q.back(); // it will become { 1,2,8}

    cout<<q.front(); // prints 1

    q.pop(); //{2,8} , delete 1

    cout<<q.front(); // now new queue = {2,8} , hence print front will print 2 
    // size is empty 
}

void explainPQ() {
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(6); //{5,6}
    pq.push(7);//{7,5,6}
    pq.employee(8);//{8,7,5,6}

    cout<<pq.top(); //print 10

    pq.pop(); // {7,5,6}

    //size , swap , empty functions are same as others 

    //minimum heap
    priority_queue, vector<int>, greater<int>> pq;
     pq.push(5); // {5}
    pq.push(6); //{6,5}
    pq.push(7);//{6,5,7}
    pq.employee(8);//{6,5,7,8}

    cout<<pq.top(); // prints 2
}

//SET CONTAINER --> store every thing in sorteed manner , and unique

void explainSet() {
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //begin,end,rbegin,rend,size,empty,swap,erase same as above

    //{1,2,3,4,5}
    auto iterator = st.find(3);

    //{1,2,3,4,5}
    auto iterator = st.find(6); // give st.end()

    //for counting 
    int cnt = st.count(1); // agar 1 h to 1 dega nahi to 0

    //{1,2,3,4,5}
    auto it1 = st.find(2); // it=iterator
    auto it2 = st.find(4);
    st.erase(it1,it2); // {1,4,5} coz erase{first , last )

    // lower_bound() and upper_bound function works in the same way as in vector , see video in discription

    // syntax 
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet() {
    // same as set but no a unique 

    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1); // all 1 is erased

    int ctn = ms.count(1);

    ms.erase(ms.find(1)); // only single 1 is erased

    ms.erase(ms.find(1) , ms.find(1)+2); // erase{ start, end )

    //rest all function are same
}

void explainUSet() {
    unordered set<int> st ;
    //lower bound and upper bound function does not works, rest all are same as above , better complexity, except some when collision happens 
}


//MAP --> stores unique data in sorted form
void explainMap() {
    map<int , int> mpp; // int,int --> {key , value}
    map<int , pair<int, int>>mpp;
    map<pair<int,int>,int>mpp;

    mpp[1] = 2; //{1,2} , first declaration for  map<int , int> mpp;
    mpp.emplace({3,1});
    mpp.insert({2,4}); // [{1,2}, {2,4} , {3,1}]

    mpp[{2,3}] = 10; //{[2,3] ,10} second declaration for map<pair<int,int>,int>mpp;


    {
        {1,2}
        {2,4}
        {3,1}
    }

    for (auto it :mpp) {
        cout<<it.first<<" " <<it.second<<endl;// [{1,2}, {2,4} , {3,1}]
    }

    cout<<mpp[1];// 2
    cout<<mpp[5];//0 coz 5 not exists

    auto it = mpp.find(3);
    cout<<*(it).second;// {3,1} jaha 3 h wo de dega

    auto it =mpp.find(5); // mpp.end() coz 5 h hi nahi

    //syntax for lower and uppeer bound
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase, swap,size,empty, same as above
}

//Multi Map --> stores multiple keys  , every thind same as mapp

void  explaimMultimap() {

}

//UNORDERED MAP --> 

void explainUnorderedmap() {
    // same as set and unordered set
}

//COMP--> boolean expression 

bool comp(pair <int,int> p1 , pair <int,int> p2) {
    if(p1.second<p2.second) return true;
    if (pi.second>p2.second) return false;

    // if they are same 
    if(p1.first>p2.first) return true;
    return false;
}

//Extra 

void explainExtra() {

    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, grater<int>);//sort in decending order

    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}}; // {4,1} {2,1} {1,2}

    //sorrt a/c to increasing 2nd element , if 2nd element is same, then sort it a/c to 1st element but in decreasing 

    sort(a,a+n ,Comp);
    // {4,1} {2,1} {1,2}

    int num=7;
    int cnt= __builtin_popcount();

    long long num = 165787679875
    int cnt = __bultin_popcountll();

    string s = "123"; // permutation of string 

    do{
        cout <<s<<endl;
    }
    while(next_permutation(s.begin(), s.end()));

    
    int  maxi = *max_element(a, a+n);
}

int main() {
    return 0;
}