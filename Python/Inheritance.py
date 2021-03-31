#Using Inheritance

class Teacher: #creating a class Teacher
    def __init__(self,fname,lname): #creating a function
        self.firstname = fname #assigning values 
        self.lastname = lname
    def printname(self): #creating another function
        print(self.firstname,self.lastname)
class student(Teacher): #creating another class and inheriting the features of the class Teacher
    pass #pass is used when we don't use any method or code inside the class
s = student('Micky','Mouse') #creating the object of the class student and passing the values
s.printname() #calling the function printname of the class Teacher using the object of student class
