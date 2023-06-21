def merge_the_tools(string, k):
    # your code goes here
    for item in range(0,len(string) // k):
        piece = string[:k]
        unique = []
        for item in piece:
            if item not in unique:
                unique.append(item)
        string = string[k:]
        print(''.join(unique))
