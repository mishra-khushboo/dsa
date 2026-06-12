class Solution:

    def solveRec(self, coins: List[int], amount: int) -> int:
        if amount == 0 :
            return 0
        if amount < 0:
            return float('inf')

        mini = float('inf')

        for coin in coins:
            ans = self.solveRec(coins, amount - coin)
            if ans != float('inf') :
                mini = min(mini, 1+ ans)
        
        return mini

    
    def solveMem(self, coins, amount, dp) -> int:
        if amount == 0 :
            return 0
        if amount < 0:
            return float('inf')

        if dp[amount] != -1 :
            return dp[amount]

        mini = float('inf')

        for coin in coins:
            ans = self.solveMem(coins, amount - coin,dp)
            if ans != float('inf') :
                mini = min(mini, 1+ ans)

        dp[amount] = mini

        return mini

    def coinChange(self, coins: List[int], amount: int) -> int:
        # ans = self.solveRec(coins,amount)

        # if ans == float('inf'):
        #     return -1

        # return ans

        dp = [-1] * (amount + 1)
        ans = self.solveMem(coins,amount,dp)
        if ans == float('inf'):
            return -1
        else:
            return ans
        
        