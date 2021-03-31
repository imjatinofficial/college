#printing the sum of the sum of odd or even numbers in a given range
i = int(input('Enter the initial number : '))
j = int(input('Enter the final number : '))
even=0
odd=0
for i in range(i,j+1):
    if(i%2==0):
        even = even+i
    else:
        odd = odd+i
print('sum of even numbers is ' , end='')
print(even)
print('sum of odd numbers is ' , end='')
print(odd)

        
    
