from itertools import product

prod = product('01', repeat=3)
out = ''

print("Таблица истинности: \nA   |   B   |   C   | кол-во истинных | кол-во ложных")
for i in list(prod):
    n1 = 0
    n0 = 0
    a, b, c = map(int, i)
    x = (a <= (b and c))
    if x:
        n1+=1
    else:
        n0+=1
    y = (c <= b)
    if y:
        n1+=1
    else:
        n0+=1
    z = (a == c)
    if z:
        n1+=1
    else:
        n0+=1
    if n1 == 2 and n0 ==1:
        out = 'В кино пошли'
        if a == 1:
            out+=" A"
        if b == 1:
            out+=" B"
        if c == 1:
            out+=" C"
    print(str(a) + '   |   ' + str(b) + '   |   ' + str(c) + '   |       ' + str(n1) + '         |       ' + str(n0))
print('\n' + out)
