A = int(input())
for _ in range(A):
    B, C = input().split()
    B = int(B)
    C = str(C)
    for i in C: 
        print(i*B, end='')
    print("")