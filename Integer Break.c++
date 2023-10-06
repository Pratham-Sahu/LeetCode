class Solution {
public:
    int integerBreak(int n) {
        vector<int> a(n+1,0);
        for(int i=2;i<=n;i++)
            for(int j=1;j<i;j++)
                a[i] = max(a[i], max(j, a[j]) * (i - j));
        return a[n];
    }
};
