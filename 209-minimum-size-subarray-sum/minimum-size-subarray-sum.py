class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left = 0
        windowSum = 0
        best = float("inf")

        for right, value in enumerate(nums):
            windowSum += value
            while windowSum >= target:
                best = min(best, right - left +1)
                windowSum -= nums[left]
                left +=1
        return 0 if best == float("inf") else best
        