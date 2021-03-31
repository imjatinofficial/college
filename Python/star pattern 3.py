for i in range(1,6): #for loop for rows
    for j in range(i,5): #for loop for spaces
        print(' ' , end=' ') #printing spaces 
    for k in range(1,i+1): #for loop for stars
        print('*' , end=' ') #printing stars
    print() #using print for jumping to next line
