# https://leetcode.com/problems/clear-digits/description/

class Solution(object):
    def clearDigits(self, s):
        """
        :type s: str
        :rtype: str
        """
        array = []

        for i in s:

            # check if non-digit then push in array
            if not i.isdigit():
                array.append(i)

            # otherwise check if array is empty
            elif array:

                #pop the recent array entry
                array.pop()

        #join them back for output
        return ''.join(array)


