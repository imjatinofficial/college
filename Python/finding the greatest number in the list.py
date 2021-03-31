#finding the greatest number in a list

numbers = [1,8,2,4,6,3]
max = numbers[0]
for number in numbers:
    if number > max:
        max = number
print(f'{max} is the greatest number in the list')
