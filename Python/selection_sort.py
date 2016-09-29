#!usr/bin/env python
def ssort(l):
	size = len(l)
	for i in range(size):
		m = l.index(min(l[i:]))
		if l[m] < l[i]:
			l[i], l[m] = l[m], l[i]
	return l
	
	
test = [12,1981,54,0,-20000,500,365,-10,8,2,4,-4]
print ssort(test)