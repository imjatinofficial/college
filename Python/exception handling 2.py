#Exception Handling
try:
    a = 10
    print(a) 
except NameError: #to catch a specific type of error
    print('a is not defined')
else: #else is used when there is no exception
    print('Evreything is fine. There is no Exception')
    
