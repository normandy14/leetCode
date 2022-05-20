#include <vector>
#include <iostream>

using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target) {
  for (int i=0; i < nums.size()-1; i++) {
    for (int j=i+1; j < nums.size(); j++) {
      // cout << i << endl;
      // cout << j << endl;
      // cout << nums[i] << endl;
      // cout << nums[j] << endl;
      if (nums[i] + nums[j] == target) {
        // cout << nums[i] + nums[j] << endl;
        vector<int> sol {i, j};
        return sol;
      }
    }
  }
  return nums;
}

int main() {
  vector<int> nums {2, 7, 11, 15};
  Solution s;
  vector<int> sol = s.twoSum(nums, 9);
  cout << sol[0] << endl;
  cout << sol[1] << endl;
  vector<int> nums2 {3, 2, 4};
  vector<int> sol2 = s.twoSum(nums2, 6);
  cout << sol2[0] << endl;
  cout << sol2[1] << endl;
  vector<int> nums3 {3, 3};
  vector<int> sol3 = s.twoSum(nums3, 6);
  cout << sol3[0] << endl;
  cout << sol3[1] << endl;
  return 0;
}