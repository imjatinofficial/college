#membership operator that are(in , not in)

a = [10,20,30] #creating list a
b = 20 #taking single value of the variable b
c = [10,20] #taking c as list
     
print (b in a) #checking  if value of b is in a 
print(b not in a) #checking if value of b are not in a
print(a in c) #checking if the value of a is in c
print(c in a) #checking if the value of c is in a
print(a not in c) #checking if the value of a is not in c
print(c not in a) #checking if the value of c is not in a
print('hello' in 'hello world') #checking whether a string is present in other string or not

      
#print(a in b) will not work because a is list and b is a single value and we can not compare these two
#print(a not in b) will not work because a is list and b is a single value and we can not compare these two 
