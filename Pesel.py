for x in range(0,int(input())):
    b = list(input())
    suma = int(b[0]) + int(b[1])*3 + int(b[2])*7 + int(b[3])*9+ int(b[4])+ int(b[5])*3 + int(b[6])*7 +int(b[7])*9 + int(b[8]) + int(b[9])*3 + int(b[10])


    if suma > 0:
        if suma %10 == 0:
            print('D')
        else:
            print('N')
    else:
        print('N')
