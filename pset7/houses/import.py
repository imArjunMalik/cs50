# Import certain files
from cs50 import SQL
from csv import reader
from sys import argv

# Open database
db = SQL("sqlite:///students.db")

# Check for proper argument otherwise exit
if len(argv) < 2:
    print("usage error, import.py characters.csv")
    exit()

# Open the csv file
with open(argv[1], newline='') as charactersFile:
    characters = reader(charactersFile)
    for character in characters:
        if character[0] == 'name':
            continue

        # Split the full name into first, last and middle name
        fullName = character[0].split()

        # Insert the name and the other infos in the database
        if len(fullName) < 3:
            db.execute("INSERT INTO students(first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
                       fullName[0], None, fullName[1], character[1], character[2])

        else:
            db.execute("INSERT INTO students(first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
                       fullName[0], fullName[1], fullName[2], character[1], character[2])