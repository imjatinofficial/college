#if elif else condition

marks = int(input("Enter the marks of the student :")) #asking input for the marks
if(marks>90): #if condition
    print("Grade is A.") #output
elif(marks>70 and marks<=90): #elseif condition
    print("Grade is B.") #output
elif(marks>40 and marks<=70): #second elseif condition
    print("Grade is C.") #output
else: #else part
    print("Student is FAIL.") #output
