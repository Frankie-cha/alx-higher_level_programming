#!/usr/bin/python3
from sys import argv

num_args = len(argv) - 1

if num_args == 0:
    print("No arguments.")
else:
    print(f"Number of argument(s): {num_args}")

    for i in range(num_args):
        print(f"{i + 1}: {argv[i + 1]}")

    print()
