#include <vector> // dynamically allocated array
#include <iostream>

using namespace std;

class Solution {  // class definition because of requested format
  public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target) {
  for (int i=0; i < nums.size() - 1; i++) {
    for (int j=i+1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        vector<int> sol {i, j}; // return the vector solution of the two indexes (i and j)
        return sol; // the requested format
      }
    }
  }
  return nums; // simply return the vector parameter if indexes were not found
}

int main() {
  // Tests are in the main functions
  
  // Initialize the class, vector, and ints
  Solution s;
  vector<int> nums;
  vector<int> sol;
  int target;
  int indexI;
  int indexJ;
  
  // Case 1
  cout << "Case 1" << endl;
  target = 9;
  nums = {2, 7, 11, 15};
  sol = s.twoSum(nums, target);
  indexI = sol[0];
  indexJ = sol[1];
  cout << sol[0] << " : " << nums[indexI] << endl;
  cout << sol[1] << " : " << nums[indexJ] << endl;
  cout << target << endl;
  
  // Case 2
  cout << "Case 2" << endl;
  target = 6;
  nums = {3, 2, 4};
  sol = s.twoSum(nums, target);
  indexI = sol[0];
  indexJ = sol[1];
  cout << sol[0] << " : " << nums[indexI] << endl;
  cout << sol[1] << " : " << nums[indexJ] << endl;
  cout << target << endl;
  
  // Case 3
  cout << "Case 3" << endl;
  target = 6;
  nums = {3, 3};
  sol = s.twoSum(nums, target);
  indexI = sol[0];
  indexJ = sol[1];
  cout << sol[0] << " : " << nums[indexI] << endl;
  cout << sol[1] << " : " << nums[indexJ] << endl;
  cout << target << endl;
  return 0;
}