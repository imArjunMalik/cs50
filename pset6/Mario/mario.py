# Include get_int from cs50 library
from cs50 import get_int

# Get height from user
def main():
    n = get_height()

    for i in range(n):
        for j in range(n):
            if i + j < n - 1:
                print(" ", end= "")
            else:
                print("#", end= "")

        if j == n - 1:
            print("")
                
                









# Declaration for get_height fucntion
def get_height():
    while True:
        n = get_int("Height:")
        if n >= 1 and n <= 8:
            break
    return n

main()







