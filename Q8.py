import random
from  collections import namedtuple


print("Examples for question 2:")
array = [0,1,2,3]
list = [0,1,2,3]
tuple = (0,1,2,3)
Animal = namedtuple("Animal", 'noise food')
lion = Animal("ROAR", "Antelope")

print("An array: ", array)
print("A list: ", list)
print("A tuple: ", tuple)
print("A record: ", lion)
print()

print("Examples for question 3:")
list = [0,1,2,3,4]
newlist = list[::-1]
print("Original list:")
print(list)
print("New list: ")
print(newlist)
print()

print("Examples for question 4:")
list = [0,1,2,3,4]
print("Original list:")
print(list)
random.shuffle(list)
print("New list: ")
print(list)
print()

#print("Examples for question 5:")
#range_num = range(0,10,1)     
#xrange_num = xrange(0,10,1)   Using python 3, there is no xrange

#print("Type of range: ")
#print (type(range_num))     
#print("Type of xrange: ")
#print (type(xrange_num))       

#range_num = range(1,10000)     
#xrange_num = xrange(1,10000)  

#print("Size of range: ")
#print (sys.getsizeof(range_num))   
#print("Size of xrange: ")
#print (sys.getsizeof(xrange_num))
#print()

print("Examples for question 7:")
names = ["Camryn", "Paige", "Rogers"]
print("Names before append: ")
for x in names:
          print(x)

names.append("Henderson")
print()

print("Names after append: ")
for x in names:
          print(x)
print()

print("Examples for question 8:")
a = "Wombats are cool"
print(a)
b = "Woah:What:Huh"
print(b)
c = "Hi there what is your name?"
print(c)

print()

print ("a.split()")
print(a.split())
print ("b.split(':')")
print (b.split(':'))
print ("c.split(' ', 2)")
print (c.split(' ',2))
print ("b.split(':', 1)")
print (b.split(':',1))
