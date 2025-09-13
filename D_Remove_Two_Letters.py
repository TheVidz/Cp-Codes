t = int(input())

while t>0:
    n = int(input())
    s = input()

    poss = set()

    for i in range(n-1):
        poss.add((s[i:]+s[:i+2]))
    print(len(poss))
    t-=1