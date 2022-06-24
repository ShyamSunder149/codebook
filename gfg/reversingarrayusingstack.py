def reverse(S):
    m = []
    for i in S:
        m.append(i)
    x = ''
    for _ in range(len(m)):
        x += m.pop()
    return x
