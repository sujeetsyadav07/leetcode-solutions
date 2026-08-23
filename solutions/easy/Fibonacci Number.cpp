// Title: Fibonacci Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/fibonacci-number/

public:
    int fib(int n) {
        if(n<=0) return 0;
        if(n==1)return 1;
        int sum=0;
        sum=fib(n-2)+fib(n-1);
        return sum;
    }
};
class Solution {
