#!/usr/bin/python3
import importlib

module_name = 'variable_load_5'
module = importlib.import_module(module_name)

print(module.a)
