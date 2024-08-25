class Solution
{
public:
    int reverse(int x)
    {
        int rem = 0;
        long sum = 0;
        int original = abs(x);

        while (original > 0)
        {
            rem = original % 10;
            sum = sum * 10 + rem;
            original = original / 10;
        }
        if (sum > INT_MAX || sum < INT_MIN)
        {
            return 0; // Return 0 if reversing x would cause overflow/underflow
        }
        if (x < 0)
        {
            return sum * (-1);
        }
        return sum;
    }
};