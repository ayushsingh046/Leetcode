class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        ans = nums[0] + nums[1] + nums[2]

        for i in range(n):
            j, k = i+1, n-1
            while j<k:
                current = nums[i] + nums[j] + nums[k]

                if abs(target - current) < abs(target - ans):
                    ans = current
                if current > target:
                    k -=1
                else:
                    j+=1
        return ans
        