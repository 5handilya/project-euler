x = 999

n3 = x//3
a3 = 3
d3 = 3
l3 = n3 * d3

n5 = x//5
a5 = 5 
d5 = 5
l5 = n5 * d5

n15 = x//15
a15 = 15
d15 = 15
l15 = n15 * d15

sum3 = int((n3/2.0)*(a3 + l3))
sum5 = int((n5/2.0)*(a5 + l5))
sum15 = (int(n15/2.0)*(a15 + l15))

print(sum3 + sum5 - sum15)
