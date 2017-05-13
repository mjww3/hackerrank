import sys


if __name__ == '__main__':
    Testcase = int(sys.stdin.readline())
    
    for _ in range(Testcase):
        K = int(sys.stdin.readline())
        print((K // 2) * (K - (K // 2)))