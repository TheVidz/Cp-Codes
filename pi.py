t = int(input())

while(t>0):
    s = input()
    p="314159265358979323846264338327950288419716939937510"
    count =0
    
    for i in range(len(s)):
        if s[i]==p[i]:
            count+=1
        else:
            break

    print(count)
    t-=1
