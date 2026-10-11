with open('python/INPUT.TXT') as input:
    a,b = input.readline().split()
    with open('python/OUTPUT.TXT', 'w') as output:
        output.write(str(int(a)+int(b)))