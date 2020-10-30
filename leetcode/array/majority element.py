class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n=set(nums)
        mini=0
        ans=0
        for i in n:
            if(nums.count(i)>mini and nums.count(i)>len(nums)//2):
                mini=nums.count(i)
                ans=i
        return ans
