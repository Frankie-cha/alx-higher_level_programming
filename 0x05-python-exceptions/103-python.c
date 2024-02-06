#include <Python.h>
#include <stdio.h>

void print_python_list(PyObject *p) 
{
    if (!PyList_Check(p)) 
    {
        fprintf(stderr, "Invalid PyListObject\n");
        return;
    }

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", ((PyVarObject *)p)->ob_size);
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    for (Py_ssize_t i = 0; i < ((PyVarObject *)p)->ob_size; ++i) 
    {
        printf("Element %ld: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
    }
}

void print_python_bytes(PyObject *p) 
{
    if (!PyBytes_Check(p)) 
    {
        fprintf(stderr, "Invalid PyBytesObject\n");
        return;
    }

    printf("[.] bytes object info\n");
    printf("size: %ld\n", PyBytes_GET_SIZE(p));
    printf("trying string: %s\n", PyBytes_AsString(p));
    printf("[*] first 10 bytes: ");
    for (Py_ssize_t i = 0; i < 10 && i < PyBytes_GET_SIZE(p); ++i) 
    {
        printf("%02hhx ", PyBytes_AS_STRING(p)[i]);
    }
    printf("\n");
}

void print_python_float(PyObject *p) 
{
    if (!PyFloat_Check(p)) 
    {
        fprintf(stderr, "Invalid PyFloatObject\n");
        return;
    }

    printf("[.] float object info\n");
    printf("value: %f\n", ((PyFloatObject *)p)->ob_fval);
}
