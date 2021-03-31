# creating class

class numbers: #use class keyword to create class
    def sum(self,a,b): #creating a function inside the class
        print(f'sum of the two numbers is {a+b}') #printing output
d = numbers() #creating object of the class

print(d.sum(10,20)) #passing the values through the function
    
