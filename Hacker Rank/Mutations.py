def mutate_string(string, position, character):
    string_list = list(string)
    string_list[position] = character
    mutated_string = ''.join(string_list)  
    return mutated_string

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
