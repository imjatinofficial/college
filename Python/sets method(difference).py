#sets methods

a = {'car' , 'bike' , 'airplane'} #creating the set by using the curly brackets
b = {'car', 'bike'}
c = {'Audi','BMW','Meercedes-Benz'}
print(a.difference(b)) #prints the difference between the sets i.e those items that are not common in both sets
print(a.difference(c))
print(c.difference(a))
