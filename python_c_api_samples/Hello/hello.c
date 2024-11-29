#include <Python.h>
#include <stdio.h>

// Exception from hello module
static PyObject *HelloError;

// Function which prints hello
static PyObject *
hello_sayhello(PyObject *self)
{
    int sts;
   
    sts = printf("%s","Hello from Python Extension Module!!!\n");
    if (sts < 0) {
        PyErr_SetString(HelloError, "Print command failed");
        Py_RETURN_NONE;
    }

    Py_RETURN_NONE;
}

static PyMethodDef HelloMethods[] = {
   {"sayhello",  (PyCFunction)hello_sayhello, METH_NOARGS,
    "Prints hello message from extension module"},	
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static struct PyModuleDef hellomodule = {
   PyModuleDef_HEAD_INIT,
   "hello",  /* name of module */
   "Sample hello module",     /* module documentation, may be NULL */
   -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   HelloMethods
};

PyMODINIT_FUNC
PyInit_hello(void)
{
    PyObject *m;

    m = PyModule_Create(&hellomodule);
    if (m == NULL)
        return NULL;

    HelloError = PyErr_NewException("hello.error", NULL, NULL);
    
    Py_INCREF(HelloError);
    PyModule_AddObject(m, "hello.error", HelloError);

    return m;
}
