#!/bin/python
def factorial(n):
    if(n==0):
        return 1
    if(n==1):
        return 1
    return n*factorial(n-1)

import sys


n = int(raw_input().strip())
print(factorial(n))

