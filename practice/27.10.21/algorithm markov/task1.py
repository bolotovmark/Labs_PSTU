import time


def sort(rand_string):
    f = False
    while not f:
        if rand_string.count('*a') != 0:
            rand_string = rand_string.replace('*a', '', 1)
            f = True
        if rand_string.count('*b') != 0:
            rand_string = rand_string.replace('*b', '', 1)
            f = True
        if rand_string.count('*') != 0:
            rand_string = rand_string.replace('*', '', 1)
            f = True
        if rand_string.count(' ') != 0:
            rand_string = rand_string.replace(' ', '*', 1)

        # time.sleep(1)  # задержка вывода, для удобства можно добавить
        print(rand_string)


sort(str(input()))
