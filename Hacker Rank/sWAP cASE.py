def swap_case(s):

    l = []

    for letter in s:
        if letter.islower():
            l.append(letter.upper())
        else:
            l.append(letter.lower())
    
    s = "".join(l)

    return s

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)