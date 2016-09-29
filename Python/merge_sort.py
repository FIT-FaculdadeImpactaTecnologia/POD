#!usr/bin/env python

def msort(l):
	result = []
	size = len(l)
	print l
	if(size < 2):
		return l
	
	mid = size/2
	left = msort(l[:mid])
	right = msort(l[mid:])

	i = 0
	j = 0

	while i < len(left) and j < len(right):
		if left[i] < right[j]:
			result.append(left[i])
			i+=1
		else:
			result.append(right[j])
			j+=1
	result += left[i:]
	result += right[j:]
	return result



test = [2,4,5,6,24545,624,62,728,8,92,0,1,-453,376376,-2]
print msort(test)

