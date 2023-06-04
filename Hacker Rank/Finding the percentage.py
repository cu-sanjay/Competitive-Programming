if __name__ == "__main__":
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    length_of_array = len(student_marks[query_name])
    sum = sum(student_marks[query_name])
    average = sum / length_of_array
    print(f"{average:.2f}")
