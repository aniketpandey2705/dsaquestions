class Solution {
public:
    int climbStairs(int n) {
        double sqrt5 = sqrt(5);

        double a = pow(1 + sqrt5, n+1);
        double b = pow(1 - sqrt5, n+1);

        return round((a - b) / (pow(2, n+1) * sqrt5));
    }
};