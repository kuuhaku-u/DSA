#https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/


class Solution(object):
    def minimumAverage(self, nums):
        """
        :type nums: List[int]
        :rtype: float
        """

        sortA = sorted(nums)
        avg=[]

        while(len(sortA)>0):
            avgx= (sortA[0]+sortA[-1])/2
            avg.append(avgx)

            sortA.pop(0)
            sortA.pop(-1)


        sortavg = sorted(avg)

        return sortavg[0]