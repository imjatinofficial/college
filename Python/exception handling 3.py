#Exception Handling
try:
    a = 10
    print(a/0) 
except NameError: #to catch a specific type of exception
    print('a is not defined')
except: #except is used to handle any type of exception
    print('exception is a divided by 0')
else: #else is used when there is no exception
    print('Evreything is fine. There is no Exception')
    
