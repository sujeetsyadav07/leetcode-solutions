// Title: Rotate Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/rotate-array/

        int m=n-1;
        while(l<m){
             int temp=nums[l];
            nums[l]=nums[m];
            nums[m]=temp;
            l++;
            m--;
        }
        for(int q=0;q<n;q++){
            cout<<nums[q];
        }
    }
};
