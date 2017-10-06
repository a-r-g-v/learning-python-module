// helloWrap.c
#include "Python.h"

extern int add(int, int);
 
PyObject* hello_add(PyObject* self, PyObject* args){
  int x, y, g;
 
  if(!PyArg_ParseTuple(args, "ii", &x, &y)){
    return NULL;
  }else{
    g = add(x, y);
    return Py_BuildValue("i", g);
  }
}

static PyMethodDef hellomethods[] = {
  {"add", hello_add, METH_VARARGS},
  {NULL},
};
 
 
void inithello(){
  Py_InitModule("hello", hellomethods);
}
