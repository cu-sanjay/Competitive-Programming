if __name__ == '__main__':
    s = input()
    print(True in [i.isalnum() for i in s])
    print(True in [i.isalpha() for i in s])
    print(True in [i.isdigit() for i in s])
    print(True in [i.islower() for i in s])
    print(True in [i.isupper() for i in s])
