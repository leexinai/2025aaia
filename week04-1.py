#week04-1.py �G�X�@ Python����
#LeetCode 2529. Maximum Count of Postive Integers and Negative Integers
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos=0
        neg=0
        for i in ranfe(len(nums)):
            if nums[i]>0: pos +=1 #����
            if nums[i]<0: neg +=1 #�t��
        return max(pos,neg) #��̤j���� return�a�^�h
