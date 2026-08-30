// Title: Move Zeroes
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++){
        int temp=nums[i];
        }
        nums[i]=nums[j];
        i++;
        if(nums[j]!=0){
        }
        for(int l=0;l<n;l++){
            cout<<nums[l];
        }
        nums[j]=temp;
