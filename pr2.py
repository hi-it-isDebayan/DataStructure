def pattern(n):
	for i in range(1,n+1):
			print("  "*(i-1),end="")
			print("* "*((2*n)-(2*i-1)))
def show():
	n=int(input("Enter no./ of lines..."))
	pattern(n);
show()
