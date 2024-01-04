#!/usr/bin/python3
from sys import argv

args = argv[1:]

if not args:
    print("No arguments provided.")
else:

    result = sum(int(arg) for arg in args)

    print(result)
