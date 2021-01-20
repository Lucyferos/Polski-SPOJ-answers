import sys
try:
    for line in sys.stdin:
        w = "".join(line.title().split())
        b= w[1:int(len(line))]
        print(line[0],end='')
        print(b)
except:
    pass
