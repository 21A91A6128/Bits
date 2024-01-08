class Solution:
    def cuts(self, arr, tar):
        c, cutss = arr[0], 1
        for i in range(1, len(arr)):
            if c + arr[i] <= tar:
                c += arr[i]
            else:
                cutss += 1
                c = arr[i]
        return cutss

    def splitArray(self, arr, N, K):
        summation = sum(arr)
        l = summation // K
        h = summation
        maxx = max(arr)
        result = 0

        while l <= h:
            m = (l + h) // 2
            if self.cuts(arr, m) > K:
                l = m + 1
            else:
                h = m - 1
                result = max(maxx, l)
        return result

# Example usage:
solution = Solution()
N = int(input())
arr=list(map(int,input().split()))
K = int(input())
ans = solution.splitArray(arr, N, K)
print(f"The minimum possible maximum sum among subarrays: {ans}")
