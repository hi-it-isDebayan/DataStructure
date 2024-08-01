#magic number
def sum_of_digits(num):
	a=[]
	s=0
	while(num!=0):
		a.append(num%10)
		num=num//10
	for i in range (0,len(a)):
			s+=a[i]
	return s
def magic(num):
	while(num>9):
		num=sum_of_digits(num)
	return num
def show():
	n=int(input("Enter Number..."))
	print(magic(n))
	if(magic(n)==1): 
		print("magic Number.")
		
	else: print("no a magic no.")
show()
		
