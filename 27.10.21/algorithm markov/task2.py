import time


def sort(rand_string):
    f = False
    while not f:
        if rand_string.count('c') != 0:
            rand_string = rand_string.replace('c', '')
        if rand_string.count('bb') != 0:
            rand_string = rand_string.replace('bb', 'ddd', 1)
            f = True

        time.sleep(1)  # задержка вывода, для удобства можно добавить
        print(rand_string)


sort(str(input()))
