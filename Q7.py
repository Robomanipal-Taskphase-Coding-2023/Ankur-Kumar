# Find the distance between co-ordinates
import math

x1 = input("Enter x1")
y1 = input("Enter y1")
x2 = input("Enter x2")
y2 = input("Enter y2")

a = [(x1,y1)]
b = [(x2,y2)]

c = (x1-x2)*(x1-x2)
d = (y1-y2)*(y1-y2)

sqrt = (c+d)**0.5
print(sqrt)



