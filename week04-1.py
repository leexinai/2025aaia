#week04-1.py 二合一 Python版本
#LeetCode 2529. Maximum Count of Postive Integers and Negative Integers
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0
        for i in ranfe(len(nums)):
            if nums[i]>0: pos +=1 #正數
            if nums[i]<0: neg +=1 #負數
        return max(pos,neg) #把最大的數 return帶回去
