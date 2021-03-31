#function recursion

def function_recursion(n):
    if n>0:
        fact = n*function_recursion(n-1)
    else:
        fact = 1
    return fact
print(function_recursion(5))
    
