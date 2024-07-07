#https://leetcode.com/problems/find-the-sum-of-encrypted-integers/


class Solution:
    def sumOfEncryptedInt(self, nums: List[int]) -> int:
        sum = 0
        for i in range(0,len(nums)):

            #seperating int into strings eg: [10] = ['1','0']
            a = [int(i) for i in str(nums[i])]
            sorta = sorted(a)

            for j in range(0,len(a)-1):

                sorta[j] = sorta[-1]
                
            #joing the seperated strings 
            p = int("".join(str(j) for j in sorta ))

            sum += p

        return sum