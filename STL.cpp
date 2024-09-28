#include <bits/stdc++.h>
using namespace std;


// STL ( Standard Template Library )

// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators



// containers


// Pairs
 
void explainPair(){

	pair<int,int> p = {1,3};

	cout << p.first << " " << p.second << endl;  // print 1 3

	pair<int, pair<int,int>> p1 = {1,{3,4}};

	cout << p.first << " " << p1.second.second << " " << p1.second.first << endl; // print 1 4 3

	pair<int,int> arr[] ={{1,2},{2,5},{5,1}};

	cout << arr[1].second; // print 5
}




// Vector ( like an array( fixed size ) but vector size if dynamic )

void explainVector(){

	vector<int> v;  // create empty container {}

	v.push_back(1);  // insert 1 into it. {1}
	v.emplace_back(2); // {1,2}

	vector<pair<int,int>> vec; 

	v.push_back({1,2});
	v.emplace_back(1,2);

	vector<int> v(5,100); // {100,100,100,100,100}

	vector<int> v(5); // {0,0,0,0,0}

	vector<int> v1(5,20); // {20,20,20,20,20}

	vector<int> v2(v1);  // {20,20,20,20,20}



	// Accessing elements of vector

	// 1. using loop 
	//  cout << v[0] << endl;
	//  cout << v[1] << endl;


	// 2. using iterator


	vector<int>::iterator it = v.begin();

	it++;
	cout << *(it) << " ";


	it = it + 2;
	cout << *(it) << " ";

	vector<int>::iterator it = v.end(); // point to the end of vector(if you point to the last element then you need to do it-- ( now it points to the last element in the vector))

	vector<int>::iterator it = v.rand(); // we generally don't use this

	vector<int>::iterator it = v.rbegin(); // we generally don't use this


	cout << v[0] << endl;


	cout << v.back() << " ";  //print the last element of the vector


	// this is how you print the entire vector

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *(it) << " ";
	}


	// short way to print entire vector elements
	// auto( automatically understand it is of type iterator )

	for(auto it = v.begin(); it != v.end(); it++ ){
		cout << *(it) << " ";
	}


	for(auto it : v){
		cout << it << " ";
	}


	// deletion from the vector

	// {10,20,12,23}
	
	v.erase(v.begin()+1);
	
	// {10,20,12,23,35}
	v.erase(v.begin()+2,v.begin()+4); // {10,20,35} [start, end]



	// Insert function

	vector<int>v(2,100); // {100,100}

	v.insert(v.begin(),300); // {300,100,100}

	v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

	vector<int> copy(2,50); // {50,50}

	v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

	// {10,20}
	cout << v.size(); // 2


	v.pop_back();  // {10}

	// v1 -> {10,20}
	// v2 -> {30,40}

	v1.swap(v2); // v1 ->{30,40} , v2 -> {10,20}

	v.clear(); // erases the entire vector

	cout << v.empty();

}




// List

	
void explainList(){

	list<int> ls;

	ls.push_back(2); // {2}

	ls.emplace_back(4) // {2,4}

	ls.push_front(5); // {5,2,4}

	ls.emplace_front(); // {2,4}

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}	







void explainDeque(){

	deque<int>dq;

	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1,2}
	dq.push_front(4); // {4,1,2}
	dq.emplace_front(3); // {3,4,1,2}


	dq.pop_back(); // {3,4,1}
	dq.pop_front(); // {4,1}

	dq.back();

	dq.front();

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

}





// Stack

void explainStack(){

	stack<int> st;

	st.push(1); // {1}
	st.push(2); // {2,1}
	st.push(3); // {3,2,1}
	st.push(3); // {3,3,2,1}
	st.emplace(5); // {5,3,3,2,1}


	cout << st.top(); // prints 5 "** st[2] is invalid **"

	st.pop(); // st looks like {3,3,2,1}

	cout << st.top(); // 3

	cout << st.size(); // 4

	cout << st.empty(); // false

	stack<int>st1, st2;

	st1.swap(st2);

	// in stack we basically deal with these three functions ( push() , pop() and top() -> time O(1) for all these operations )

}




// Queue

void explainQueue(){

	queue<int> q;

	q.push(1); // {1}
	q.push(2); // {1,2}

	q.emplace(4); // {1,2,4}

	q.back() += 5;

	cout << q.back(); // prints 9

	// Q is {1,2,9}
	cout << q.front(); // prints 1

	q.pop(); // {2,9}

	cout << q.front(); // prints 2

	// size swap empty same as stack
}







// Priority Queue


void explainPQ(){

	priority_queue<int>pq;  // maximum element stay on the top in the priority queue.

	pq.push(5); // {5}
	pq.push(2); // {5,2}
	pq.push(8); // {8,5,2}
	
	pq.emplace(10); // {10,8,5,2}

	cout << pq.top(); // prints 10

	pq.pop(); // {8,5,2}

	cout << pq.top(); // prints 8

	// size swap empty function same as others


	// Minimum Heap
	priority_queue<int,vector<int>, greater<int>> pq;

	pq.push(5); // {5}
	pq.push(2); // {2,5}
	pq.push(8); // {2,5,8}
	pq.emplace(10); // {2,5,8,10}

	cout << pq.top(); // prints 2

	// Time Complexity

	// push() -> log(n)
	// pop()  -> log(n)
	// top()  -> O(1)

}




// Set


void explainSet(){

	set<int> st;

	st.insert(1);
	st.emplace(2);
	st.insert(2);
	st.insert(4);
	st.insert(3);


	// Functionality of insert in vector
	// can be used also, that only increases
	// efficiency

	// begin(), end(), rbegin(), rend(), size(),
	// empty() and swap() are same as those of above

	// {1,2,3,4,5}
	auto it = st.find(3);


	// {1,2,3,4,5}
	auto it = st.find(6); // return st.end() -> after 5


	// {1,4,5}
	st.erase(5); // erases 5 // takes logarithmic time

	int cnt = st.count(1); 

	auto it = st.find(3);
	st.erase(it); // it takes constant time


	//{1,2,3,4,5}
	auto it1 = st.find(2);
	auto it2 = st.find(4);
	st.erase(it1,it2); // after erase {1,4,5} [first,last)

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax

	auto it = st.lower_bound(2);

	auto it = st.upper_bound(3);

}





// MultiSet


void explainMultiSet(){

	multiset<int> ms;

	ms.insert(1); // {1}
	ms.insert(1); // {1,1}
	ms.insert(1); // {1,1,1}

	ms.erase(1); // all 1's erased

	int cnt = ms.count(1);

	// only a single one erased
	ms.erase(ms.find(1));


	// erase[starting_index, ending_index]
	ms.erase(ms.find(1), ms.find(1)+2);

	// rest all functions same as set
}






// Unordered Set

// store unique elements
// store elements ( not in sorted order) but actually randomized order
// all operations take O(1) time


void explainUnorderedSet(){

	unordered set<int> st;

	// lower_bount and upper_bound function
	// does not works, rest all functions are same
	// as above, it does not stores in any
	// particular order it has a better complexity
	// then set in most cases, except some when collision happens



}





// Map
// store data in key-value pair 
// key can be integer , double , string

void explainMap(){

	map<int,int> mpp; // key is inter and value is also integer

	map<int, pair<int, int>> mpp; // key is integer and value is two integer

	map<pair<int, int>, int> mpp; // key is two integer and value is integer



	mpp[1] = 2; // {1,2}
	mpp.emplace({3,1}); // {3,1}

	mpp.insert({2,4}); // {2,4}

	mpp[{2,3}] = 10; // {{2,3},10}


	// how map stored data in sorted order of key

	// {{1, 2},{2, 4},{3, 1}}


	for(auto it: mpp){
		cout << it.first << " " << it.second << endl;
	}


	cout << mpp[1]; // 2 
	cout << mpp[5]; // 0 or null


	auto it = mpp.find(3);
	cout << *(it).second; // 1

	auto it = mpp.find(5); // mpp.end() after the map


	auto it = mpp.lower_bound(2);

	auto it = mpp.upper_bound(3);

	// erase, swap, size, empty are same as above.

}



// Multi Map


void explainMultiMap(){

	// everthing same as map, only it can store multiple keys
	// only mpp[key] cannot be used here.
}




// Onordered Map

void explainUnorderedMap(){

	// same as set and unordered_set difference.
}





void explainExtra(){

	sort(a,a+n);
	sort(v.begin(),v.end()); 

	sort(a+2,a+4); // sort only some part of the array.

	sort(a, a+n, greater<int>); // sort in descending order

	pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

	// sort it according to second element
	// if second element is same, then sort
	// it according to first element but in descending


	sort(a, a+n, comp);

	// {{4,1}, {2,1}, {1,2} };


	int num = 7;
	int cnt = __builtin_popcount(); // 3

	long long num = 165786578687;
	int cnt = __builtin_popcountll();



	// print all permutation of string "123"

	string s = "123";
	sort(s.begin(),s.end());


	do{
		cout << s << endl;
	} while(next_permulation(s.begin(),s.end()));


	int maxi = *max_element(a,a+n); // gives max element


}





// builtin comparator

bool comp(pair<int,int>p1, pair<int,int>p2){

	if(p1.second < p2.second){
		return true;

	} else if(p1.second == p2.second){
		if(p1.first > p2.second)
			return true;
	}
	return false;
}



int main ()
{

 	// explainPair();

}