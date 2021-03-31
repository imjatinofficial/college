# removing duplicate values from a string

numbers = [1,1,2,3,4,3,5,2]
uniques = []
for number in numbers:
    if number not in uniques:
        uniques.append(number)
print(uniques)
