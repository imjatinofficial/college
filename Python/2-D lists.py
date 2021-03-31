#2-D lists

matrix = [ #creating the 2-D lists
    [1,2,3], #in this we create lists inside list 
    [4,5,6],
    [7,8,9]
]
matrix[0][1] = 20 #changing the value of a particular item in the matrix . First we write the index of the first item in the list then we select the item inside the item that we have selected earlier
print(matrix[0][1]) #printing the value
print(matrix)
for row in matrix: #selects the first item in the matrix and iterates over that item
    for item in row: #iterates over the values of the row selected in the upper loop
        print(item) #printing individual item in the matrix
