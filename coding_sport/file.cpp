// C++ program to implement
// the above approach
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
// #include <multiset>

using namespace std;

template <typename T> void print(T x) { cerr << x; }
// template <typename T> void print(vector<T>& vect) { cerr << "[ "; for (auto x : vect) { print(x); cerr << " "; } cerr << "]"; }
template <typename T> void print(vector<T>& vect) { cout << "vect " << ' '; cout << '[' << ' '; for (auto x : vect) { cout << x << ' '; } cout << ']'; cout << '\n'; }
template <typename T> void print( set<T>& set1){cout << "set " << ' ';cout << '[' << ' ';for (auto x : set1) {cout << x << ' ';}cout << ']';cout << '\n';}
template <typename T> void print(set<T, greater<T>>& a) { cerr << "[ "; for (auto x : a) { print(x); cerr << " "; } cerr << "]"; }
template <typename T> void print(unordered_set<T>& a) { cerr << "[ "; for (auto x : a) { print(x); cerr << " "; } cerr << "]"; }
template <typename T, typename V> void print(map<T, V>& a) { cerr << "[ "; for (auto i : a) { print(i); cerr << " "; } cerr << "]"; }
template <typename T, typename V> void print(unordered_map<T, V>& a) { cerr << "[ "; for (auto i : a) { print(i); cerr << " "; } cerr << "]"; }
template <typename T> void print(multiset<T>& a) { cerr << "[ "; for (auto x : a) { print(x); cerr << " "; } cerr << "]"; }
template <typename T> void print(multiset<T, greater<T>>& a) { cerr << "[ "; for (auto x : a) { print(x); cerr << " "; } cerr << "]"; }
template <typename T> void print(vector<vector<T>>& a) { cerr << "[ "; for (auto i : a) { print(i); cerr << " "; } cerr << "]"; }
template <typename T, typename V> void print(pair<T, V> x) { print(x.first); cerr << ":"; print(x.second); }
template <typename T, typename V> void print(vector<pair<T, V>>& a) { cerr << "[ "; for (auto x : a) { print(x.first); cerr << ":"; print(x.second); cerr << " "; } cerr << "]"; }







// // Function to print the set elements 
// // arranged in non-ascending order

// // Function to print unordered 
// // set elements

// //Function to print map elements 
// // arranged in non-descending order

// template <typename T, typename V>

// //Function to print unordered map elements

// //Function to print multiset elements 
// // arranged in non-descending order

// //Function to print elements of a 
// // multiset arranged in non-ascending order


// // Function to print vector of 
// // vectors elements

// // Function to print elements of a pair

// // Function to print vector of 
// // pairs elements








// Local function
// void local()
// {
//   #ifndef ONLINE_JUDGE
//   freopen("inputf.in", 
//           "r", stdin);
//   freopen("outputf.out", 
//           "w", stdout);
  
//   // ONLINE_JUDGE
//   #endif 
// }

// Driver code
int main()
{
  // local();



  /// MY CODE GOES HERE
  vector<int> vect = {2, 4, 10,  12, 17};
  set<int> set1;


  // First operation
  for (auto& x : vect) 
  {
    if (x % 2 == 0)
      x += 10;
    else
      x -= 10;
  }

  print(vect);

  vector<string> vect2 = {"Geeks","for", "Geeks"};
  
  // Printing vect2 elements
  print(vect2);

  // Modifying vect2
  // push back string "is great"
  vect2.push_back("is the great");

  // Printing vect2 after modification
  print(vect2);


  // Inserting elements in the set
  for (int i = 0; i < 10; i++)
    set1.insert(i);

  // Printing set1 elements
  print(set1);

  // Declaring another set of 
  // string type
  set<string> set2;

  // Inserting elements in the set
  set2.insert("GeeksforGeeks");

  // Printing set2 elements
  print(set2);



  // MAPP THE END RESULT, ADD LOOP IF NECESSARY
  int finalAnswervect = 0;
  for (auto x : vect)finalAnswervect += x;

  int finalAnswerSet = 0;
  for(auto x : set1) finalAnswerSet += x;

  // Print the final answer
  cout << "\nFinal Answer vect : " <<  finalAnswervect << endl;
  cout << "\nFinal Answer set : " <<  finalAnswerSet << endl;



  return 0;
}
