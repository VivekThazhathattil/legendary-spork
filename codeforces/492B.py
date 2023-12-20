n, l = list(map(int, input().split()))
arr = list(map(int, input().split()))
a.sort()
vmin = max(a[0], l - a[n - 1])
for i in range(1, n):
    b = (a[i] - a[i - 1])/2
    if(b > vmin):
        vmin = b
print(float(vmin))
