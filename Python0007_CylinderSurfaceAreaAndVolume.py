import math
Feet = 3.2808399

print("Type the radius of cylinder: ")
radius = float(input())
print("Type the high of cyclinder: ")
high = float(input())

result = 2 * math.pi * radius * (high+radius)
result2 = math.pi * radius * radius * high

print("The surface area of cylinder is {} meters^2 and {} feets^2.".format(result, result * Feet * Feet))
print("The volume of cylinder is {} meters^3 and {} feets^3.".format(result2, result2 * Feet * Feet * Feet))
