#nested if condition

a=int(input("Enter the value of A")) #asing the input for number A
b=int(input("Enter the value of B")) #asking the input for number B
c=int(input("Enter the value of C")) #asking the input for number C
if(a>b): #applying  first if condition
    if(a>c): #applying the second if condition
        print("A is Greatest.") #printing the output
    else: #alterante for the upper used condition
        print("C is Greatest") #printing the value 
elif(b>c): #else if conditon if the first condition is false
    print("B is Greatest") #printing the output
else: #alternate if both conditions are false
    print("C is Greatest") #printing the output
