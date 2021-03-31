#star pattern

for i in range(0,6):
    for j in range(0,i):
        print('*', end='')
    for k in range(i,5):
        print(' '*2,end='')
    for l in range(0,i):
        print('*',end='')
    print()
for i in range(1,5):
    for j in range(i,5):
        print('*' , end='')
    for l in range(1,i*2+1):
        print(' ',end='')
    for m in range(i,5):
        print('*',end='')
    print()
