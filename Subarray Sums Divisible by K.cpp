int subarraysDivByK(vector<int>& A, int K) {
  vector<int> dp(A.size() + 1, 0);
  for (int i = A.size() - 1; i >= 0; --i)
    for (int j = i, sum = 0; j < A.size(); ++j) {
      sum += A[j];
      if (sum % K == 0) {
        dp[i] = 1 + dp[j + 1];
        break;
      }
    }
  return accumulate(begin(dp), end(dp), 0);
}
