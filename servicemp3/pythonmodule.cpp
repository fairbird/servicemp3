#include "servicemp3.h"


static PyMethodDef servicemp3Methods[] =
{
	 {NULL,NULL,0,NULL}
};

PyMODINIT_FUNC
initservicemp3(void)
{
	Py_InitModule("servicemp3", servicemp3Methods);
}
