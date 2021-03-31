class Person:
    def __init__(self,name):
        self.name = name

    def talk(self):
        print(f'Hi I am {self.name}')


jatin = Person('Jatin Yadav')
print(jatin.name)
jatin.talk()