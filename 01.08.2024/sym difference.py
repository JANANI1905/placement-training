a=int(input())
j=set(list(map(int,input().split())))
k=int(input())
b=set(list(map(int,input().split())))
c=j.symmetric_difference(b)
d=sorted(c)
for i in c:
    print(i)