n = int(input())
print(str(n) + " ", end='')

while n != 1:
    if n%2==0:
        n = n//2
        print(str(n) + " ", end='')
    else:
        n = n*3 + 1
        print(str(n) + " ", end='')
