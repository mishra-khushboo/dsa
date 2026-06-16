class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        n = len(grid)
        N = n * n
        freq = [0] * (N + 1)

        for row in grid:
            for num in row:
                freq[num] += 1


        repeating = -1

        for num in range(1,N+1):
            if freq[num] == 2:
                repeating = num

        missing = -1

        for num in range(1,N+1):
            if freq[num] == 0:
                missing = num

        return [repeating,missing]