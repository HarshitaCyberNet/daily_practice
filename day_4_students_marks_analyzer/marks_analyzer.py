marks=[78,85,62,90,55,47,88,73,12,2,95]
total_students=len(marks)
average=sum(marks)/total_students
highest=max(marks)
lowest=min(marks)
print("students marks:",marks)
print("total students:",total_students)
print("average marks:", average)
print("highest marks:", highest)
print("lowest marks:", lowest)
for i, m in enumerate(marks, start=1):
     if m >=75:
         grade="excellent"
     elif m>=60:
         grade="good"
     else:
         grade="poor,needs improvement"
         
     print(f"student {i+1}: marks={m} -> grade={grade}")    