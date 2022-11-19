class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else
        {
            long y=x,n=0;
            while(y>0)
            {
                n+=y%10;
                y/=10;
                if(y>0)
                    n*=10;
            }
            if(n==x)
                return true;
            else
                return false;
        }
        
    }
};
