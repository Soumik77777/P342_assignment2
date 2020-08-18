#Q2.#Create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice (not random) in the code itself. Then Find A+B and A.B.


A = [10,0,1]
B = [-4,3,7]

dotproduct=0

print("The first vector =", A)
print("The second vector =", B)

#A+B
sum=0
for i,j in zip(A,B):
    sum=[i+j for i,j in zip(A,B)]
print ("A+B=", sum) 

#A.B
for i,j in zip(A,B):
    product =[i*j for i,j in zip(A,B)]
    dotproduct += i*j
print ("A.B=", dotproduct)


'''

The first vector = [10, 0, 1]                                                                                                                                                     
The second vector = [-4, 3, 7]                                                                                                                                                    
A+B= [6, 3, 8]                                                                                                                                                                     
A.B= -33                                                                                                                                                                            

'''
