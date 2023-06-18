def find(x):
    if p[x] != x:
        p[x] = find(p[x])
    return p[x]

n, m, p, q = map(int, input().split())

# ��ʼ�����鼯
p = [i for i in range(n + 1)]
q = [i for i in range(-m, 0)]
q.append(0)

# �ϲ���У�е�����
for i in range(p):
    x, y = map(int, input().split())
    px, py = find(x), find(y)
    if px != py:
        p[px] = py

# �ϲ�ŮУ�е�����
for i in range(q):
    x, y = map(int, input().split())
    px, py = find(-x), find(-y)
    if px != py:
        p[px] = py

# ͳ����У��ŮУ�д�СΪ�����ļ��ϵĸ���
odd_p = sum([1 for i in range(1, n + 1) if p[i] == i and (i == 1 or i % 2 == 0)])
odd_q = sum([1 for i in range(-m, 0) if p[i] == i and i % 2 != 0])

# ͳ����У��ŮУ�д�СΪż���ļ����е���������
even_p = sum([len([1 for j in range(1, n + 1) if p[j] == i]) for i in range(1, n + 1) if p[i] == i and i % 2 != 0])
even_q = sum([len([1 for j in range(-m, 0) if p[j] == i]) for i in range(-m, 0) if p[i] == i and i % 2 == 0])

# ������
print((even_p + 1+even_q) // 2)