# 1
#  Требуется сложить два целых числа А и В.
# Входные данные
# В единственной строке входного файла INPUT.TXT записаны два натуральных числа через пробел. Значения чисел не превышают 109.
# Выходные данные
# В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — сумму чисел А и В. 
with open('python/INPUT.TXT') as input:
    a,b = input.readline().split()
    with open('python/OUTPUT.TXT', 'w') as output:
        output.write(str(int(a)+int(b)))