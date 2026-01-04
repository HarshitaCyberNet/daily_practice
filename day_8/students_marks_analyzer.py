marks = [78, 85, 90, 66, 88]

total = sum(marks)
average = total / len(marks)

print("Total Marks:", total)
print("Average Marks:", average)

if average >= 75:
    print("Grade: A")
else:
    print("Grade: B")
