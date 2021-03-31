#printing even numbers in a given range
i = int(input('Enter the initial number : '))
j = int(input('Enter the final number : '))
for i in range(i,j+1):
    if(i%2==0):
        print("even number : ",end='')
        print(i)
    else:
        print("odd number : ",end='')
        print(i)
