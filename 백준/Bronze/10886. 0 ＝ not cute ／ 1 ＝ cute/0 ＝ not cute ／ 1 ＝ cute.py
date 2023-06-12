A = int(input())
score1 = 0
score2 = 0
for _ in range(A):
    B = int(input())
    if B == 1:
        score1 += 1
    elif B == 0:
        score2 += 1
if score1 > score2:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")