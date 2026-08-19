class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        arr = {}
        for i in range (len(nums)):
            n = nums[i]
            difference = target - n
            if difference in arr:
                return [arr[difference],i]
            arr[n] = i

        