/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 

Example 1:
-----------
Input: nums = [1,2,3,1]
Output: true

Example 2:
-----------
Input: nums = [1,2,3,4]
Output: false

Example 3:
-----------
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 
Constraints:
-------------
1 <= nums.length <= 10e5
-10e9 <= nums[i] <= 10e9
*/
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 0) {
            return false;
        }

        unordered_set<int> seen; // Use an unordered_set for O(1) lookups
        for (int num : nums) {
            if (seen.count(num)) { // Check if num is already in the set
                return true;
            }
            seen.insert(num); // Add num to the set
        }
        return false;
    }
};