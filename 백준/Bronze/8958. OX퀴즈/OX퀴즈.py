A = int(input())
for _ in range(A):
    B = input()
    score = 0
    count = 0
    for i in B:
        if i == 'O':
            count += 1
            score += count
        else:
            count = 0
    print(score)