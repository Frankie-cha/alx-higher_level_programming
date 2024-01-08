#!/usr/bin/python3
def element_at(my_list, idx):
    if idx < 0 or idx >= len(my_list):
        return None
    else:
        return my_list[idx]
my_list = [1, 2, 3, 4, 5]

result1 = element_at(my_list, 2)
result2 = element_at(my_list, -1) 
result3 = element_at(my_list, 10) 

print(result1)
print(result2)
print(result3)
