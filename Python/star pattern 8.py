#star pattern

for i in range(0,5):
    for j in range(i,5):
        print('*' , end='')
    for l in range(1,i*2+1):
        print(' ',end='')
    for m in range(i,4):
        print('*',end='')
    print()
        
