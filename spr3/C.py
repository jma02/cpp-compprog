t = int(input())

for i in range(0, t):
    blank = input()
    n = int(input())
    sum = 0
    for j in range(0, n):
        sum+= int(input())
    if sum % n == 0:
        print("YES\n")
    else:
        print("NO\n")

