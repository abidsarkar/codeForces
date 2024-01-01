#https://codeforces.com/problemset/problem/490/A
total_student = int(input())
#print(total_student)
Student_list = [int(x) for x in input.split()]
list(map(int, input().split()))
programming_indices = [i + 1 for i, skill in enumerate(Student_list) if skill == 1]
maths_indices = [i + 1 for i, skill in enumerate(Student_list) if skill == 2]
pe_indices = [i + 1 for i, skill in enumerate(Student_list) if skill == 3]


min_teams = min(len(programming_indices), len(maths_indices), len(pe_indices))


if min_teams == 0:
    print(0)
else:
    print(min_teams)
    for i in range(min_teams):
        print(programming_indices[i], maths_indices[i], pe_indices[i])