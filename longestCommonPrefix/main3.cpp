#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//  steps to solve:
//  given:
//  sorted list
//  isolate the first word in the list (stored in var)
//

string commonPrefix(vector<string> v, vector<string> subV) {
  string subString;
  for (int i=0; i < subV.size(); i++) {
    
    subString = subV[i];
    int compareStr;
    bool flag = true;
    cout << "subString: " << subString << endl;
    
    for (int j=0; j < v.size(); j++) {
      cout << v[j] << endl;
      compareStr = v[j].find(subString, 0);
      cout << "compare: " << compareStr << endl;
      if (compareStr == -1) {
        flag = false ;
      }
    }
    if (flag == true) {
      cout << "Out: " << subString << endl;
      return subString;
    }
    flag == true;
  }
  return "";
}

int main() {
  /*
  string str = "flow";
  string s = "computer";
  int loc =  str.find (s, 0);
  cout << loc << endl;
  */
  vector<string> v = { "flow","flight", "flower" }; // sorted test strings
  vector<string> subV = { "flow", "flo" , "low", "fl", "lo", "ow", "f", "l", "o", "w" }; // substrs from main
  
  string s=  commonPrefix(v, subV);
  cout << s << endl;
  return 0;
}