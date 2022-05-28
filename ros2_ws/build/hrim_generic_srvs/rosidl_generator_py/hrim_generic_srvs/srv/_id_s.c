// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hrim_generic_srvs:srv/ID.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hrim_generic_srvs/srv/detail/id__struct.h"
#include "hrim_generic_srvs/srv/detail/id__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_srvs__srv__id__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hrim_generic_srvs.srv._id.ID_Request", full_classname_dest, 36) == 0);
  }
  hrim_generic_srvs__srv__ID_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_srvs__srv__id__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ID_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_srvs.srv._id");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ID_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/id__struct.h"
// already included above
// #include "hrim_generic_srvs/srv/detail/id__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hrim_generic_srvs__srv__id__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hrim_generic_srvs.srv._id.ID_Response", full_classname_dest, 37) == 0);
  }
  hrim_generic_srvs__srv__ID_Response * ros_message = _ros_message;
  {  // device_kind_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_kind_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_kind_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // device_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->device_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vendor_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "vendor_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vendor_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // product_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "product_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->product_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // instance_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "instance_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instance_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hrim_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "hrim_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hrim_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hros_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "hros_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hros_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hrim_generic_srvs__srv__id__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ID_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hrim_generic_srvs.srv._id");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ID_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hrim_generic_srvs__srv__ID_Response * ros_message = (hrim_generic_srvs__srv__ID_Response *)raw_ros_message;
  {  // device_kind_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_kind_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_kind_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->device_name.data,
      strlen(ros_message->device_name.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vendor_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vendor_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vendor_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // product_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->product_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "product_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instance_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->instance_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instance_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hrim_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hrim_version.data,
      strlen(ros_message->hrim_version.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hrim_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hros_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hros_version.data,
      strlen(ros_message->hros_version.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hros_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
