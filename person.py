class person:
    def __init__(self, title, firstname, lastname, age):
        self.title = title
        self.firstname = firstname
        self.lastname = lastname
        self.age = age
        
    def updatefirstname(self, firstname):
        self.firstname = firstname
        
    def updatelastname(self, lastname):
        self.lastname = lastname
        
    def updatetitle(self, title):
        self.title = title
        
    def howold(self):
        print(self.firstname, "is", self.age, "years old.")
        
    def birthday(self):
        self.age += 1
        print("Happy birthday,", self.firstname, "\b")
        print("you are now", self.age, "years old!")
        
    
