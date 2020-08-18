#Q1(a) Find the average distance between two points on a straight line made of N(=6) discrete points


n = int(input("Please input the number of equidistant points:"))
points = []

for x in range(n):
	points.append(x)
	x += 1

total_pairs = n**2
sum = 0

for i in points:
	for j in points:
		sum += abs(j - i)

avg_distance = sum/total_pairs

print("The average distance between two points is ", avg_distance, "units.")