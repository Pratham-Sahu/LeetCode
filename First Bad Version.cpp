class Solution {
public:
	int firstBadVersion(int n) {
		long long int l=1;
		long long int h=n;
		while(l<h)
		{
			long long int mid=(l+h)/2;
			if(isBadVersion(mid)==false)
			{
				l=mid+1;
			}
			else
			{
				h=mid;
			}
		}
		return (int)h;
	}
};
