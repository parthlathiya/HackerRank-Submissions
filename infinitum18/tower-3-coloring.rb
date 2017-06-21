
###################################################### 
# 													 #
#                      author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
# 													 #
###################################################### 

# gets.chomp.to_i.times do |t|
a=gets.chomp.to_i
	aa=27
	for b in (1...a).to_a
		# temp=dp[b-2]
		aa=(((aa*aa)%1000000007)*aa)%1000000007
	end
puts aa