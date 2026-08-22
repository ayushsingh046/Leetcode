class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        cnt = defaultdict(int)
        left = 0
        answer = 0
        for right, f in enumerate(fruits):
            cnt[f] +=1
            while len(cnt)>2:
                lf = fruits[left]
                cnt[lf] -= 1
                if cnt[lf] == 0:
                    del cnt[lf]
                left +=1
            answer = max (answer, right-left+1)
        return answer
        