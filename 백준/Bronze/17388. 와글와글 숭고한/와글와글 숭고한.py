A, B, C = map(int, input().split())
if A+B+C >= 100:
    print("OK")
elif A+B+C < 100 and A<B and A<C:
    print("Soongsil")
elif A+B+C < 100 and B<A and B<C:
    print("Korea")
elif A+B+C < 100 and C<A and C<B:
    print("Hanyang")