#dividing the rhombus and inverting stars increases only  by one

for l in range(0,5):
    for m in range(0,l):
        print(' ',end='')
    for n in range(l,5):
        print('* ',end='')
    print()
for i in range(1,5):
    for j in range(i,4):
        print(' ', end='')
    for k in range(0,i+1):
        print('* ',end='')
    print()
