tup1=[('A',100),('B',79),('C',80),('D',88)]

def by_score(t):
    return t[1]
L1=sorted(tup1,key=by_score,reverse=True) # 分数按降序
print(tup1)
print(L1)
