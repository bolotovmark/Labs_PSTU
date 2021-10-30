#Реализация Алгоритмов Маркова  
##Задача №1
```python
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
```
##Задача №2
```python
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
```
##Задача №3
```python
import time


def sort(rand_string):
    while rand_string.count('ba') != 0:
        rand_string = rand_string.replace('ba', 'ab', 1)
        #time.sleep(1)  # задержка вывода, для удобства можно добавить
        print(rand_string)


sort(str(input()))

```