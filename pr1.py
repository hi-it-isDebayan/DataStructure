def fact(n):
	if(n==0 or n==1): return 1;
	return n*fact(n-1)
def main():
	num=int(input("Enter number... "))
	print("Factorial of",num,"is",fact(num))
main()
