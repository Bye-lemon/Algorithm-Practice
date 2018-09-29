class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        oral = nums[:]
        resv = nums[::-1]
        nums.sort()
        lens = len(nums)
        foo = 0
        bar = lens - 1
        while bar > foo:
            if nums[foo] + nums[bar] > target:
                bar -= 1
            elif nums[foo] + nums[bar] < target:
                foo += 1
            elif nums[foo] + nums[bar] == target:
                return [oral.index(nums[foo]), lens-1-resv.index(nums[bar])]
        return []
