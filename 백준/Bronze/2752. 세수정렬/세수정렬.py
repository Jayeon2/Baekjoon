A, B, C = map(int, input().split())
if A > B > C:
    print(C, B, A)
elif A > C > B:
    print(B, C, A)
elif B > A > C:
    print(C, A, B)
elif B > C > A:
    print(A, C, B)
elif C > B > A:
    print(A, B, C)
elif C > A > B:
    print(B, A, C)