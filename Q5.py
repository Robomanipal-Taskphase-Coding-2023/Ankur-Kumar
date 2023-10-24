
def decimalToBinary_int(n):
    if (n > 1):

        decimalToBinary_int(n // 2)
    print(n % 2, end='')


def decimalToBinary_dcml(n):
    if ( n < 1):
        a = n * 2
        b = int(a)
        c = a - b
        decimalToBinary_dcml(c)
    print(b, end ='')


def main():
    dcml = 3.4
    itg = int(dcml)
    dcm = dcml-itg
    decimalToBinary_int(itg)
    print(".", end='')
    decimalToBinary_dcml(dcm)


if __name__ == '__main__':
    main()