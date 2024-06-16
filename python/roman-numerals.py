'''
Design a python program that prompts the user to enter a number within the range of 1 through 10. The
program should display the Roman numeral version of that number. If the number is outside of the
range 1 through 10, the program should display an error message. Try to draw a flow chart as well for
this problem. 
'''

num = eval(input("Roman Numeral Converter\nPlease enter a number 1 - 10: "))

if num == 1:
    print("I")
elif num == 2:
    print("II")
elif num == 3:
    print("III")
elif num == 4:
    print("IV")
elif num == 5:
    print("V")
elif num == 6:
    print("VI")
elif num == 7:
    print("VII")
elif num == 8:
    print("VIII")
elif num == 9:
    print("IX")
elif num == 10:
    print("X")
else:
    print("incorrect input, try again")