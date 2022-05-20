# name ='Abhishek kumar'  # we don't have to specify the type of the variable. python can automatically do that
# print(name.find('h')) #provides only the first word position.
# new_name=name.replace("Abhi","Kabhi") 
# print(new_name)
# #print(help(str)) #use to get help regarding string.
# x='a' 
# print(type(x)) # print data type of the number
# print(8//3) #like simple division in c/c++
# print(2**3) #this gives 2 raised to the power 3
# print(abs(-3)) #print absolute value
# print(round(3.5)) #this will round off the given number to nearest integer.
# print(round(3.5,2)) #the second argument tells that how many digits you wanted to round off after decimal point
# print(1>2) #this will return a bool.
# s='100' # here s is a string.
# t='200' # here t is a string.
# print(s+t) #here it will add s and t as string .
# s=int(s) # now s is converted into corresponding integer value.
# t=int(t) # now t is converted into corresponding integer value. 
# print(s+t)
# days=['sun','mon','tue','wed','thu','fri','sat']
# print(days)
# print(days[-2]) # this will print the 5 element from the last.
# print(days[2:4]) #first index is inclusive and the second is exclusive. 
# days.append('holiday') # this will insert holiday to the list of days after the last position.
# # if we want to add an element at a particular position then we can use insert function.
# days.insert(1,"today")
# print(days)
# another_days=['funny day','sad day']
# # days.insert(0,another_days) # it will insert the whole list at 0th index of the list. i.e it is not adding element by element.
# # so there is an another function to insert item by item. 
# # days.extend(another_days)
# print(days)
# days.remove('sun') # it will remove sun from the list.
# days.pop() # remove last element of the list.And it also return the value that is removed by it.
# days.reverse() #this will revers our list.
# # days.sort() #sort our list in an alphabetical order.
# num=[5,3,6,8,9,0]
# num.sort() #sort in asscending order.
# print(num)
# # now if we want to sort in reversed order than we can use first simple sort() and then reverse.
# # or ther is an another method.
# num.sort(reverse=True)
# print(num)
# # sort function perform the operation on the original list. But if we want to sort the list without altering the original list then we can use sorted() method.
# # sorted(days) # this will return a copy of sorted list.
# print(min(num)) # print minimum value in the list.
# print(max(num)) # print maximum value in the list
# #if we want to find out the index of value in the list then we can use index() function.
# print(days.index('tue'))
# #if we want to check whether a given number is present in the list or not then we can use...
# print(3 in num) #this will return true or false.
# # in python the loops are range based so..if we want to print the number present in the list then we can use..
# for x in num :
#     print(x)
# # now if we want to print the index and the value then we can use enumerate function...
# for index,x in enumerate(num):
#     print(index,x)

# days_str=','.join(days) # seperated by comma
# print(days_str)
# days_str='#'.join(days) # seperated by hash
# print(days_str)
# days_str='/'.join(days) # seperated by forward slash.
# print(days_str)
# list_1=['hey','hello']
# list_2=list_1
# list_1[0]='namaste'   #if we make a change in one of the list then it is also reflected in the other equal list...
# print(list_1)  # ['namaste', 'hello']
# print(list_2)  # ['namaste', 'hello']  
# #sets in python is same as mathematics i.e order doesn't mattewr that is why when 
# #we printa set then it gives element in different order every time. we can perform all the function like union,intersection difference etc.
# t1={'sun','mon','sat','wed'}
# t2={'sun','mon','sat','thu','fri'}
# print (t1,t2)
# print(t1.difference(t2))
# print(t1.union(t2))
# print(t1.intersection(t2))
# #how to creates empty list, sets and tuples.
# # l=[] OR l=list()
# # t=() OR t=tuple()
# # s={} OR s=set()
# # working with dictionaries...
# students={'name':'abhishek kumar','program': 'B.Tech','course':'computer science','contact': '9837259874'} # here we have define the value and the key for the dictionary...
# print(students['name']) # this will print the value corresponding to key namein the dictionary...
# # we can do the same thing using a function...
# print(students.get('name')) # this will print the value corresponding to key name...
# # now we can modify or add something to the dictionary...for example
# students['name']='akansha' # this is going to modify the value of key name to akansha...
# students['village']='mm mandhaya' #this will add a new key value pair to the dictionary...
# # now if we want to change multiple values at a time then we can use update() function ................
# students.update({'name': 'asheesh','course':'JEE','phone number': '6399187626'})
# print (students)
# # now to delete items from a dictionary we can use del function i.e
# del students['name']
# print (students)
# # we can also use pop() function to remove a particular key value pair...but pop() function also return the value it removes.
# # name = students.pop('name') # here name will we removed from the dictionary and the value of that name is stored in new variable...
# print(len(students)) # this will print te number of keys in the dictionary...
# print(students.keys()) # return all of the keys...
# print(students.values()) # return all of the values...
# print(students.items()) # print all the pairs of key and values..
# for key in students:
#     print(key)          #this will print only keys...
# # if we want to print both the things...
# for key,value in students.items():
#     print(key,value)
# # conditional statements......
# if True:
#     print('condition was true')
# elif False:
#     print('condition was false')
# else:
#     print('no match')
# # as in c++ &&, ||, ! is logical opereator similarly we have 'and', 'or', 'not' as logical operator.
# numbers=[1,2,3,4,5]
# for x in numbers:
#     if x==3:
#         print('now for loop is going to break')
#         break
# for i in numbers:
#     for j in 'abc':
#         print(i,j)
# for m in range(10):
#     print(m)
# c=0
# while c<10:
#     print(c)
#     c+=1
# # functions...
# def func():
#     print('hello')
# func()

# # as we can create a header file in c++ and use in other function similarly we can create modules and
# #import them in an another program using "import" for ex: import my_module as mm # here i have given a shorter name to our module...
# import math
# rad=math.radians(90)
# import datetime
# today=datetime.date.today()
# import os
# os.getcwd()
# os.listdir("C:\DRIVER")
# os.mkdir("C:\PythonProject")
# os.chdir("C:\MyPythonProject")  # changing current workign directory
# os.getcwd()
