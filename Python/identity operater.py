#identity operator that are is , is not

a = [1,2,3]
b = [1,2,3]
c = [1,2]
d = 20
e = 20
f = 30
print(a is b) #false because they are in lists
print(a is c) #false
print(a is not b) #true because they are in lists
print(a is not c) #true
print('hello' is 'hello')
print(d is e) #true
print(d is f) #false
print(d is not e) #false
print(d is not f) #true
