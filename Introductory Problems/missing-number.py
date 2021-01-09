x = int(input())
numbers = input()

allNumbers = []
numbers = numbers.split(" ")

for i in range(1, x+1):
    allNumbers.append(i)

for i in numbers:
   allNumbers[int(i)-1] = ''

for i in allNumbers:
    if i != '':
        print(i)
