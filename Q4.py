# Divisible by 7 Not a multiple of 5 between 2000 & 3200

for i in range(2000,3200):
    if(i % 5 !=0):
        if(i % 7 ==0):
            print( i, end=",")