#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool compareFn(string a, string b) { // a compare function for sort method
  if (a.size() <= b.size()) {        // compare the size() of each string
    return true;
  }
  return false;
}

int main() {
  vector<string> v = { "flower","flow","flight" };  // test data
  
  sort(v.begin(), v.end(), compareFn);              // sort by length of word
  
  for (string w: v) {                               // print in sorted order
    cout << w<< endl;
  }
}