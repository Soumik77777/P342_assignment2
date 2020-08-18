#Q1(b) Find the average distance between two points on a 6 by 6 two dimentional grid.

#my code asks user for any integer input for any rectangular matrix and solves the problem.

m = int(input("Please input the number of equidistant points on horizontal side:"))
n = int(input("Please input the number of equidistant points on vertical side:"))

points = []

for a in range(m):
    for b in range(n):
        points.append([a,b])
        b +=1
    a +=1

total_pairs = (m*n)**2
sum = 0

total_points = len(points)

for i in range(total_points):
    x1,y1 = points[i]
    for j in range(total_points):
        x2,y2 = points[j]
        sum += (abs(x2 - x1) + abs(y2 - y1))

avg_distance = sum/ total_pairs

print("The average distance between two points is ", avg_distance, "units.")