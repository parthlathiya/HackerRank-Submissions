ans=1.141592623253589793238462643383279
for i in range(1,50):
	print("{0:.25f}".format(ans-round(ans) if ans>round(ans) else round(ans)-ans))
	ans = ans + 3333*0.141592653589793238462643383279
	print("{0:.25f}".format(ans-round(ans) if ans>round(ans) else round(ans)-ans))
	ans = ans + 0.141592653589793238462643383279
