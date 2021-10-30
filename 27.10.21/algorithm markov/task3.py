import time


def sort(rand_string):
    while rand_string.count('ba') != 0:
        rand_string = rand_string.replace('ba', 'ab', 1)
        #time.sleep(1)  # задержка вывода, для удобства можно добавить
        print(rand_string)


sort(str(input()))
