
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 

# gets.chomp.to_i.times do |t|
a=gets.chomp.to_i
	if a%2==1
		print "#{(a*a-1)/2} #{(a*a+1)/2} #{a}"
	else
		origa=a
		while a%2==0
			a/=2
		end
		if a==1
			print "#{origa} #{3*(origa/4)} #{5*(origa/4)}"
		else
			print "#{origa} #{((a*a-1)/2)*origa/a} #{((a*a+1)/2)*origa/a}"
		end	
	end
