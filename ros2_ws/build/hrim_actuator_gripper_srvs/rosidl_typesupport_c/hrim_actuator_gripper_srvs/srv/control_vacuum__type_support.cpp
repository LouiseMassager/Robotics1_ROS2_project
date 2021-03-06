// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/ControlVacuum.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_c__visibility_control.h"
#include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ControlVacuum_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlVacuum_Request_type_support_ids_t;

static const _ControlVacuum_Request_type_support_ids_t _ControlVacuum_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlVacuum_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlVacuum_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlVacuum_Request_type_support_symbol_names_t _ControlVacuum_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Request)),
  }
};

typedef struct _ControlVacuum_Request_type_support_data_t
{
  void * data[2];
} _ControlVacuum_Request_type_support_data_t;

static _ControlVacuum_Request_type_support_data_t _ControlVacuum_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlVacuum_Request_message_typesupport_map = {
  2,
  "hrim_actuator_gripper_srvs",
  &_ControlVacuum_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ControlVacuum_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ControlVacuum_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlVacuum_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlVacuum_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Request)() {
  return &::hrim_actuator_gripper_srvs::srv::rosidl_typesupport_c::ControlVacuum_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/control_vacuum__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ControlVacuum_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlVacuum_Response_type_support_ids_t;

static const _ControlVacuum_Response_type_support_ids_t _ControlVacuum_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlVacuum_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlVacuum_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlVacuum_Response_type_support_symbol_names_t _ControlVacuum_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Response)),
  }
};

typedef struct _ControlVacuum_Response_type_support_data_t
{
  void * data[2];
} _ControlVacuum_Response_type_support_data_t;

static _ControlVacuum_Response_type_support_data_t _ControlVacuum_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlVacuum_Response_message_typesupport_map = {
  2,
  "hrim_actuator_gripper_srvs",
  &_ControlVacuum_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ControlVacuum_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ControlVacuum_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ControlVacuum_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlVacuum_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_gripper_srvs, srv, ControlVacuum_Response)() {
  return &::hrim_actuator_gripper_srvs::srv::rosidl_typesupport_c::ControlVacuum_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ControlVacuum_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ControlVacuum_type_support_ids_t;

static const _ControlVacuum_type_support_ids_t _ControlVacuum_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ControlVacuum_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ControlVacuum_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ControlVacuum_type_support_symbol_names_t _ControlVacuum_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrim_actuator_gripper_srvs, srv, ControlVacuum)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, ControlVacuum)),
  }
};

typedef struct _ControlVacuum_type_support_data_t
{
  void * data[2];
} _ControlVacuum_type_support_data_t;

static _ControlVacuum_type_support_data_t _ControlVacuum_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ControlVacuum_service_typesupport_map = {
  2,
  "hrim_actuator_gripper_srvs",
  &_ControlVacuum_service_typesupport_ids.typesupport_identifier[0],
  &_ControlVacuum_service_typesupport_symbol_names.symbol_name[0],
  &_ControlVacuum_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ControlVacuum_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ControlVacuum_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_hrim_actuator_gripper_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, hrim_actuator_gripper_srvs, srv, ControlVacuum)() {
  return &::hrim_actuator_gripper_srvs::srv::rosidl_typesupport_c::ControlVacuum_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
