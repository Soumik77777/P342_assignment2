#Q3. Create 3*3 matrices M and N with numbers of your choices in two separate files. Read the matrices from the files. Find M x A and M x N. [A is a vector]


A = [10,0,1]

with open("matrix_m.txt", 'r' ) as a:
    matrix_m = [[int(num) for num in row.split(' ')] for row in a]
with open("matrix_n.txt", 'r' ) as b:
    matrix_n = [[int(num) for num in row.split(' ')] for row in b]


print("Vector A =", A)
print("Matrix M = ")
for i in matrix_m:
    print(i)
print("Matrix N = ")
for j in matrix_n:
    print(j)

# M x A
B = [0,0,0]

for i in range(len(matrix_m)):
    for j in range(len(matrix_m[i])):
        B[i] += matrix_m[i][j]*A[j]

print("M x A =", B)


# M x N
matrix_L = [[0,0,0],[0,0,0],[0,0,0]]
for i in range(len(matrix_m)):
    for j in range(len(matrix_n)):
        for k in range(len(matrix_n[j])):
            matrix_L[i][j] += matrix_n[k][j] * matrix_m[i][k]

print("M x N =")
for i in matrix_L:
    print(i)

    
'''

Vector A = [10, 0, 1]
Matrix M = 
[5, 10, 7]
[9, -2, 3]
[0, 17, 3]
Matrix N = 
[1, 3, -5]
[-2, 0, 7]
[2, 6, 11]
M x A = [57, 93, 3]
M x N =
[-1, 57, 122]
[19, 45, -26]
[-28, 18, 152]

'''
