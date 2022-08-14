//MAX CONSECUTIVE ONE
/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         
        vector<int> vec;
        int i=0;
        while(i<nums.size())
        {
            int j=0;
            while(i<nums.size() && nums[i]==1)
            {
                j++;
                i++;
            }
            vec.push_back(j);
            i++;
        }
        return *max_element(vec.begin(), vec.end());
    }
};
