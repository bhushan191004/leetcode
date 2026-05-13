class Solution(object):
    def longestCommonPrefix(self, strs):
        prefix=strs[0]
        for i in strs[1:]:
            while prefix !=i[:len(prefix)]:
                prefix=prefix[:-1]
        return prefix        