class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        closet = float('inf')

        for i in range(n):
            j,k = i+1, n-1
            while j<k:
                currentSum = nums[i] + nums[j] + nums[k]
                
                if abs(currentSum - target) < abs(closet - target):
                    closet = currentSum
                
                if currentSum < target:
                    j += 1
                elif currentSum > target:
                    k -=1
                else:
                    return currentSum
        return closet
        