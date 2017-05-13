n=int(input())
l=[int(i) for i in input().split()]
for j in range(n):
    if j+1 in l:
        x=l.index(j+1)
    if x+1 in l:
        y=l.index(x+1)
    print(y+1)