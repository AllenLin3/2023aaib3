class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans,total= 0,0  # 最大的total 與 目前的 total
        counter= Counter()  # 左邊小寫， 右邊大寫
        for i in range(k):  # 取出前面k個數字
            num=nums[i]
            counter[num] +=1
            total += num    # 現在的數，加到total 裡
        if(len(counter)==k) ans = max(ans, total)