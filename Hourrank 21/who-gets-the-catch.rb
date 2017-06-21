
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 

n,x1=gets.chomp.split.map(&:to_i)
	x=gets.chomp.split.map(&:to_i)
	v=gets.chomp.split.map(&:to_i)
	mini=n+1
	minv=3001
	for i in (0...n)
		time=(x[i]-x1).abs/v[i]
		if time==minv
			f=1
		end
		if time<minv
			minv=time
			mini=i
			f=0
		end
	end
	if f==1
		puts -1
	else
		puts mini
	end