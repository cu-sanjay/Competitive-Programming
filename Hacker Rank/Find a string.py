def count_substring(string, sub_string, res=0):
    if sub_string not in string:
        return res
    res = res + 1
    return count_substring(string[string.index(sub_string)+1:], sub_string, res)        

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
