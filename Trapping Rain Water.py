class Solution(object):
    def trap(self, h):
        maxL, maxR = [], []
        for i in range(len(h)):
            maxL += [max(maxL[-1], h[i]) if maxL else h[i]]
            maxR += [max(maxR[-1], h[-i-1]) if maxR else h[-i-1]]
        return sum(min(maxL[i], maxR[-i-1])-x for i,x in enumerate(h))
