def average(array):
    # your code goes here
    return round(sum(set(array))/len(set(array)),3)

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
