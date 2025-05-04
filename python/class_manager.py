class Manager:
    def __init__(self, name, age, department):
        self.name=name
        self.age=age
        self.department=department
name=input("Name: ")
age=int(input("Age: "))
department=input("Department: ")
manager1=Manager(name, age, department)
print("Manager Details: ", manager1.name, manager1.age, manager1.department)