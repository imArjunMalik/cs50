# Import get_string from cs50 library
from cs50 import get_string

# Get the input text
text = get_string("Text: ")

# Create counter variables
letter_count = 0
word_count = 0
sentence_count = 0

# Count letters
for i in range(len(text)):
    if text[i].isalnum() == True:
        letter_count = letter_count + 1

# Count words
for i in range(len(text)):
    if text[i] == " " and text[i + 1].isalnum() == True:
        word_count = word_count + 1
    if text[i] == '"' and text[i - 1] == " ":
        word_count = word_count + 1
word_count = word_count + 1

# Count sentences
for i in range(len(text)):
    if text[i] == "!" or text[i] == "?" or text[i] == ".":
        sentence_count = sentence_count + 1

# Average numbers of letters per 100 words
L = (letter_count / word_count) * 100

# Average number of sentences per 100 words
S = (sentence_count / word_count) * 100

# Using Coleman Liau index
grade = round(0.0588 * L - 0.296 * S - 15.8)

# Printing grade level
if grade < 1:
    print("Before Grade 1")
elif grade > 16:
    print("Grade 16+")
else:
    print("Grade", grade)
