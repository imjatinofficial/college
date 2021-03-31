#adding methods

class Teacher: 
    def __init__(self,fname,lname):
        self.firstname = fname  
        self.lastname = lname
    def printname(self): 
        print(self.firstname,self.lastname)
class student(Teacher): 
    def __init__(self,fname,lname,year):
        Teacher.__init__(self,fname,lname)
        self.graduationyear = year
    def welcome(self):
        print('Welcome',self.firstname,self.lastname,'to the class of Python',self.graduationyear)
        
s = student('Micky','Mouse',2019) 
s.welcome()
