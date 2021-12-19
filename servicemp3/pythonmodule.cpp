#include "servicemp3.h"
#include <Python.h>

static PyMethodDef servicemp3Methods[] =
{
	 {NULL,NULL,0,NULL}
};

#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	"servicemp3",        /* m_name */
	"servicemp3",        /* m_doc */
	-1,                  /* m_size */
	servicemp3Methods,   /* m_methods */
	NULL,                /* m_reload */
	NULL,                /* m_traverse */
	NULL,                /* m_clear */
	NULL,                /* m_free */
};

PyMODINIT_FUNC PyInit_servicemp3(void)
{
	return PyModule_Create(&moduledef);
}
#else
PyMODINIT_FUNC
initservicemp3(void)
{
	Py_InitModule("servicemp3", servicemp3Methods);
}
#endif
