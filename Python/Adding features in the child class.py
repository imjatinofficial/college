class Teacher:
    def __init__(self,fname,lname):
        self.firstname = fname
        self.lastname = lname
    def printname(self):
        print(self.firstname,self.lastname)
class student(Teacher):
    def __init__(self,fname,lname,year):
        Teacher.__init__(self,fname,lname)
        self.gradyear = year
s = student('Micky','Mouse',1943)
s.printname()
print(s.gradyear)
