li = list(map(int,input().split()))
li.sort()
ans = 0
for i in range(2):
    ans = ans + li[i]
else:
    print(ans)
