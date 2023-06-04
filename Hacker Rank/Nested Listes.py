if __name__ == "__main__":
    records = []

    for _ in range(int(input())):
        name = input()
        score = float(input())

        records.append([name, score])

    minGrade = float("inf")
    grades = []

    for entry in records:
        grades.append(entry[1])

    for item in grades:
        if item != min(grades) and item < minGrade:
            minGrade = item

    records.sort()

    for entry in records:
        if entry[1] == minGrade:
            print(entry[0])
