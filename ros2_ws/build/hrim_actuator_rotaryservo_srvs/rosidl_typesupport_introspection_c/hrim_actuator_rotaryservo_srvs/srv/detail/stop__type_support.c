// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_actuator_rotaryservo_srvs:srv/Stop.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__rosidl_typesupport_introspection_c.h"
#include "hrim_actuator_rotaryservo_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__functions.h"
#include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_srvs__srv__Stop_Request__init(message_memory);
}

void Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_srvs__srv__Stop_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_srvs__srv__Stop_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_members = {
  "hrim_actuator_rotaryservo_srvs__srv",  // message namespace
  "Stop_Request",  // message name
  1,  // number of fields
  sizeof(hrim_actuator_rotaryservo_srvs__srv__Stop_Request),
  Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_member_array,  // message members
  Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_type_support_handle = {
  0,
  &Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop_Request)() {
  if (!Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_type_support_handle.typesupport_identifier) {
    Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Stop_Request__rosidl_typesupport_introspection_c__Stop_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__functions.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_rotaryservo_srvs__srv__Stop_Response__init(message_memory);
}

void Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_fini_function(void * message_memory)
{
  hrim_actuator_rotaryservo_srvs__srv__Stop_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_srvs__srv__Stop_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_rotaryservo_srvs__srv__Stop_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_members = {
  "hrim_actuator_rotaryservo_srvs__srv",  // message namespace
  "Stop_Response",  // message name
  2,  // number of fields
  sizeof(hrim_actuator_rotaryservo_srvs__srv__Stop_Response),
  Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_member_array,  // message members
  Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_type_support_handle = {
  0,
  &Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop_Response)() {
  if (!Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_type_support_handle.typesupport_identifier) {
    Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Stop_Response__rosidl_typesupport_introspection_c__Stop_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrim_actuator_rotaryservo_srvs/srv/detail/stop__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_members = {
  "hrim_actuator_rotaryservo_srvs__srv",  // service namespace
  "Stop",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_Request_message_type_support_handle,
  NULL  // response message
  // hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_type_support_handle = {
  0,
  &hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_rotaryservo_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop)() {
  if (!hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_type_support_handle.typesupport_identifier) {
    hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_rotaryservo_srvs, srv, Stop_Response)()->data;
  }

  return &hrim_actuator_rotaryservo_srvs__srv__detail__stop__rosidl_typesupport_introspection_c__Stop_service_type_support_handle;
}
