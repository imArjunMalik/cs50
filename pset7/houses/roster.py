# Import certain files
from cs50 import SQL
from sys import argv

# Check for proper argument otherwise exit
if len(argv) < 2:
    print("usage error, roster.py houseName")
    exit()

# Open the database in aplphabetical order
db = SQL("sqlite:///students.db")
students = db.execute("SELECT * FROM students WHERE house = (?) ORDER BY last", argv[1])

# Print info for each person
for student in students:
    if student['middle'] != None:
        print(f"{student['first']} {student['middle']} {student['last']}, born {student['birth']}")
    else:
        print(f"{student['first']} {student['last']}, born {student['birth']}")
