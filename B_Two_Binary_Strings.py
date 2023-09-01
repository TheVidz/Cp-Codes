
t = int(input())

while(t>0):
    a = input()
    b = input()
    n = len(a)
    ans = False
    for i in range(n-1):
        if (a[i]==b[i]) and a[i]=='0':
            
            if (a[i+1]==b[i+1]) and a[i+1]=='1':
                ans=True
                break
                
    if(ans):
        print("YES")
    else:
        print("NO")
        


    t-=1