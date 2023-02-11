class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
    }
};
