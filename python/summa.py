# 2
# Требуется посчитать сумму целых чисел, расположенных между числами 1 и N включительно.
# Входные данные
# В единственной строке входного файла INPUT.TXT записано единственное целое число N, не превышающее по абсолютной величине 104.
# Выходные данные
# В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — сумму чисел, расположенных между 1 и N включительно. 

def main():
    with open('python/INPUT.TXT') as input:
        N = int(input.readline())
        with open('python/OUTPUT.TXT', 'w') as output:
            sum = 0
            if N > 0:
                for i in range(1, N+1):
                    sum += i
                    print(sum)
            elif N == 0:
                sum = 1
            else:
                for i in range(N, 2):
                    sum += i
                    print(sum)
            output.write(str(sum))


if __name__ == '__main__':
    main()