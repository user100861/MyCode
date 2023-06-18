def find(x):
    if p[x] != x:
        p[x] = find(p[x])
    return p[x]

n, m, p, q = map(int, input().split())

# 初始化并查集
p = [i for i in range(n + 1)]
q = [i for i in range(-m, 0)]
q.append(0)

# 合并男校中的朋友
for i in range(p):
    x, y = map(int, input().split())
    px, py = find(x), find(y)
    if px != py:
        p[px] = py

# 合并女校中的朋友
for i in range(q):
    x, y = map(int, input().split())
    px, py = find(-x), find(-y)
    if px != py:
        p[px] = py

# 统计男校和女校中大小为奇数的集合的个数
odd_p = sum([1 for i in range(1, n + 1) if p[i] == i and (i == 1 or i % 2 == 0)])
odd_q = sum([1 for i in range(-m, 0) if p[i] == i and i % 2 != 0])

# 统计男校和女校中大小为偶数的集合中的情侣数量
even_p = sum([len([1 for j in range(1, n + 1) if p[j] == i]) for i in range(1, n + 1) if p[i] == i and i % 2 != 0])
even_q = sum([len([1 for j in range(-m, 0) if p[j] == i]) for i in range(-m, 0) if p[i] == i and i % 2 == 0])

# 输出结果
print((even_p + 1+even_q) // 2)