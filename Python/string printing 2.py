first = input('Enter first name : ')
last = input('Enter last name : ')
age = input('Enter age : ')
print('The name of the person is',first,last) #We are using commas in this string . Using commas adds spaces automatically
print('The name of the person is '+first+last+str(age)) #using plus sign does not automatically adds spaces in between strings and we have change the type of the other values to the string to make them all concatenate

