a = int(input())
for i in range(a):
    try:
        x, y = map(int, input().split())
        print(x//y)
    except Exception as j:
        print("Error Code:",j)