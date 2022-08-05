# num = 9119
# num = str(num)
# l = len(num)
# ans="";
# i=0
# while(i<l):
#     x = int(num[i])
#     ans = ans+str(x*x);
#     i=i+1
# print(ans)


# arr =[1,2,3,4,5,6]
# ans = []
# n = len(arr)
# i=1
# while(i<n):
#     ans.append([arr[i-1],arr[i]])
#     i=i+1

# print(ans)

# url = "https://www.w3schools.com/python/python_lists_add.asp"
# words = [".com", ".net","ss"]
# isfind = False
# n = len(words)
# i=0
# while(i<n):
#     if(url.find(words[i])!=-1):
#         isfind =True
#         break
#     i=i+1

# print(isfind)


import itertools as it
nums = [[0, 1, 2],
       [2, 3, 4],
       [3, 4, 5, 6],
       [7, 8, 9, 10, 11],
       [12, 13, 14]]

def get_avg(x):
    x = [i for i in x if i is not None]
    return sum(x,0)
result = map(get_avg, it.izip_longest(*nums))
print(list(result))
