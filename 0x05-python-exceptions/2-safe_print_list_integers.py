#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    printed_integers = 0
    
    try:
        for i in range(x):
            value = my_list[i]
            try:
                print("{:d}".format(value), end=' ')
                printed_integers += 1
            except (ValueError, TypeError):
                pass  
    except IndexError:
        pass 
    
    print()  
    return printed_integers
