while True:
    A, B = map(int, input().split())
    if A > B:
        print("Yes")
    elif A == 0 and B == 0:
        break
    elif B >= A:
        print("No")