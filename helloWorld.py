import person

def getperson():
    firstname, lastname = input("What is your full name?: ").split()
    title = input("What is your formal title?: ")
    age = int(input("How old are you?: "))

    you = person.person(title, firstname, lastname, age)
    return you


print("Hello, World!")

classlist = []

for i in range(0,3):
    you = getperson()
    classlist.append(you)



print("Hello,", classlist[0].firstname, classlist[0].lastname, "\b!")

classlist[1].howold()
classlist[1].birthday()
