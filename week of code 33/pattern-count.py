
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 

import re

vt = int(input().strip())
for vtt in range(vt):
	at = int(input().strip())
	for att in range(at):
		s=input().strip()
		# s=re.sub("[^01]","",s)
		s=re.sub("1+","1",re.sub("0+","0",s))
		s=re.sub("101","X1",s)
		print(s)