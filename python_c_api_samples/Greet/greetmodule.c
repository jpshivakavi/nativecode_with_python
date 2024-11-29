#include <Python.h>
#include <stdio.h> 
// Exception from hello module
static PyObject *GreetError;

// Function to greet person with name as input
static PyObject *
greet_person(PyObject *self, PyObject *args)
{
    const char *name;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &name))
        return NULL;
    
    sts = printf("Welcome %s!\n",name);
    if (sts < 0) {
        PyErr_SetString(GreetError, "greet function failed");
        return NULL;
    }
    
    Py_RETURN_NONE;
}

static PyMethodDef GreetMethods[] = {
   {"greet",  greet_person, METH_VARARGS,
     "Greets person using name"},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static struct PyModuleDef greetmodule = {
   PyModuleDef_HEAD_INIT,
   "greet",   /* name of module */
   "module to greet person",      /* module documentation, may be NULL */
   -1,        /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   GreetMethods
};

PyMODINIT_FUNC
PyInit_greet(void)
{
    PyObject *m;

    m = PyModule_Create(&greetmodule);
    if (m == NULL)
        return NULL;

    GreetError = PyErr_NewException("greet.error", NULL, NULL);
    Py_INCREF(GreetError);
    PyModule_AddObject(m, "greeterror", GreetError);
    return m;
}
