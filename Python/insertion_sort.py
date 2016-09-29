#!usr/bin/env python

def isort(l):
	for i in range(1, len(l)):
		for j in range(i,0,-1):
			if l[j]<l[j-1]:
				l[j],l[j-1] = l[j-1],l[j]
	return l

test = [2,4,5,6,24545,624,62,728,8,92,0,1,-453,376376,-2]
print isort(test)
