tup1=[('A',100),('B',79),('C',80),('D',88)]

def by_score(t):
    return t[1]
L1=sorted(tup1,key=by_score,reverse=True) # 分数按降序,默认是升序
L2=sorted(tup1,key=lambda x:(x[1],x[0]))  #先按分数升序，有相同的分数再按名字升序
print(tup1)
print(L1)
print(L2)
