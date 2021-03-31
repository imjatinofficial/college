class Teacher: 
    def __init__(self,fname,lname):
        self.firstname = fname  
        self.lastname = lname
    def printname(self): 
        print(self.firstname,self.lastname)
class student(Teacher): 
    def __init__(self,fname,lname):
        Teacher.__init__(self,fname,lname)
s = student('Micky','Mouse') 
s.printname() 
