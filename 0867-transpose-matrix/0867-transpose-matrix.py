class Solution(object):
    def transpose(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """
        R, C = len(matrix), len(matrix[0])
        ans = [[None] * R for _ in xrange(C)]
        for r, row in enumerate(matrix):
            for c, val in enumerate(row):
                ans[c][r] = val
        return ans

        