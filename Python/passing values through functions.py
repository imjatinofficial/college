# passing values from function

def details(name):
    print('Enter your name {}'.format(name)) #we can use curly brackets and format to access the argument that we have passed
details('jatin')

#def car(car_name):
 #   print('car name is {}'.format(car_name))
#car('Audi')

def bike(name='Honda'): #we can also intitialise the value of the argument that we have passed
    print(name)
bike() #calling the function takes the default value that we have provided while defining the function

def aeroplane(name='Boeing777'):
    print('Name of the plane is {}'.format(name))
aeroplane()

aeroplane(name='Jet airways') #we can also change the default value of the argument by giving it another value at calling time
