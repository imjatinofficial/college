#dividing the rhombus in half and inverting

for l in range(1,5):
    for m in range(1,l):
        print(' ',end='')
    for n in range(l,6):
        print('*',end='')
    for o in range(l+1,6):
        print('*',end='')
    print()
for i in range(0,5):
    for j in range(i,4):
        print(' ', end='')
    for k in range(0,i*2+1):
        print('*',end='')
    print()

