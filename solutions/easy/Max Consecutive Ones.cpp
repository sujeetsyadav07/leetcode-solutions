// Title: Max Consecutive Ones
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/max-consecutive-ones/

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            if(count>mx){
                mx=count;
            }
        }
        return mx;
    }
        int mx=0;
        int count=0;
        int n=nums.size();
    int findMaxConsecutiveOnes(vector<int>& nums) {
