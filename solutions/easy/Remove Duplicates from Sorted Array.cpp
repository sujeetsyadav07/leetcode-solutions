// Title: Remove Duplicates from Sorted Array
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
            nums[i]=nums[j];
        }
    }
        }
             i++;
        for(int i=0;i<nums.size();i++)
        cout<<nums[i];
        return i+1;
};
