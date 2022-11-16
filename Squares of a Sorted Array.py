class Solution:
        def sortedSquares(self, nums: List[int]) -> List[int]:
            sq_nums = list(map(lambda n: n**2, nums))
            sq_nums.sort()
            return sq_nums
