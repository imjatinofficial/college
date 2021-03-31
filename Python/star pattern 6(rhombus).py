#rhombus creation

for i in range(0,5):
    for j in range(i,4):
        print(' ', end='')
    for k in range(0,i*2+1):
        print('*',end='')
    print()
for l in range(1,6):
    for m in range(0,l):
        print(' ',end='')
    for n in range(l,5):
        print('*',end='')
    for o in range(l+1,5):
        print('*',end='')
    print()
