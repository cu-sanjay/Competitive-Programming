students,subjects = map(int,input().split())
list_marks = []
for i in range(subjects):
        marks = list(map(float,input().split()))
        list_marks.append(marks)
for i in zip(*list_marks):
        print(sum(i)/len(i))
