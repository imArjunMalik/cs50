from cs50 import get_float

# accept only positive input
while True:
    try:
        input = get_float("Change Owed: ")
        if input > 0:
            break
    except:
        print("", end="")

# create counter to count total coins used
counter = 0

# convert to int 
change = input * 100

# count 25c coins
while change >= 25:
    change = change - 25
    counter = counter + 1

# count 10c coins
while change >= 10:
    change = change - 10
    counter = counter + 1

# count 5c coins
while change >= 5:
    change = change - 5
    counter = counter + 1

# count 1c coins
while change >= 1:
    change = change - 1
    counter = counter + 1

print(counter)