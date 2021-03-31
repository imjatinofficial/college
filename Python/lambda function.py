#lambda functions

def lambda_function(n): #creating the lambda function 
    return lambda a : a*n #returning the lambda function
x = lambda_function(5) # calling the lambda funciton by equalizing it to a variable
y = lambda_function(6)
print(x(4)) #calling the function by calling the variable
print(y(3))
