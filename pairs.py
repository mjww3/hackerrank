#!/usr/bin/py
# Head ends here
def pairs(a,k):
    answer = 0
    #a contains array of numbers and k is the value of difference
    for i in range(0,len(a)-1):
        for j in range(i+1,len(a)):
            if(abs(a[i]-a[j])==k):
                answer = answer+1 
    return answer
# Tail starts here
if __name__ == '__main__':
    a = map(int, raw_input().strip().split(" "))
    _a_size=a[0]
    _k=a[1]
    b = map(int, raw_input().strip().split(" "))
    print pairs(b,_k)
