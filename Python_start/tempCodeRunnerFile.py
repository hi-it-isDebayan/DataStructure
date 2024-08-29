def frac(num, dnum):
    N=[num[i]/dnum[i] for i in range(len(num))]
    return N
def main():
    num=[]
    dnum=[]
    n=int(input("Enter Size: "))
    #print("Enter: ")
    for i in range(0,n):
        inp=int(input(f'{i+1}th num:'))
        num.append(inp)
        inp_dnum=int(input(f'{i+1}th dnum:'))
        dnum.append(inp_dnum);
    print(num,"\n",dnum)
    print(f"Maximum frac: {max(frac(num,dnum))} at position {frac(num,dnum).index(max(frac(num,dnum)))+1}\nMinimum frac: {min(frac(num,dnum))} at position {frac(num,dnum).index(min(frac(num,dnum)))+1}")
main()
