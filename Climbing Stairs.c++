class Solution {
public:
    int climbStairs(int n) {
        int s=3,a=1,b=2;
        if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else
        {
            int a[46];
            a[1]=1;a[2]=2;
            for(int i=3;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
            return a[n-1]+a[n-2];
        }
    }
};
