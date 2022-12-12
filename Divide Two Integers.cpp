class Solution {
public:
    int divide(int dividend, int divisor) {
        int dividend_sign = 1;
        int divisor_sign = 1;
        long long num_dividend = dividend;
        long long num_divisor = divisor;
        long long ret = 0;
        
        if (divisor == 0)
            return 0;
        if (dividend == 0)
            return 0;
        
        if (num_dividend < 0)
        {
            dividend_sign = -1;
            num_dividend = -num_dividend;
        }
        if (num_divisor < 0)
        {
            divisor_sign = -1;
            num_divisor = -num_divisor;
        }

        if (num_divisor == 1)
            ret = num_dividend;
        else
        {
            while (num_dividend >= num_divisor)
            {
                long long temp = num_divisor;
                int i = 0;
                
                while (num_dividend >= temp)
                {
                    ret += (1 << i);
                    num_dividend -= temp;
                    
                    temp <<= 1;
                    i++;
                }
            }
        }
        
        if (ret > INT_MAX && (dividend_sign * divisor_sign > 0))
            return INT_MAX;
        
        if (dividend_sign * divisor_sign < 0)
            return -1 * ret;
        
        return ret;
    }
};
