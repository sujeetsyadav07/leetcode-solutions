// Title: Palindrome Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/palindrome-number/

        long long rev=0;
        int r;
        while(temp!=0){
            r=temp%10;
        }
            rev=rev*10+r;
            temp=temp/10;
        int temp=x;
        if(rev==x)
        return true;
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        if(x<0) return 0;
    bool isPalindrome(int x) {
