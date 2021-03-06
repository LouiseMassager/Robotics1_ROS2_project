// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrim_actuator_gripper_srvs:srv/GoalGripper.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__rosidl_typesupport_introspection_c.h"
#include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__functions.h"
#include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_gripper_srvs__srv__GoalGripper_Request__init(message_memory);
}

void GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_fini_function(void * message_memory)
{
  hrim_actuator_gripper_srvs__srv__GoalGripper_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_member_array[1] = {
  {
    "on_off",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_gripper_srvs__srv__GoalGripper_Request, on_off),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_members = {
  "hrim_actuator_gripper_srvs__srv",  // message namespace
  "GoalGripper_Request",  // message name
  1,  // number of fields
  sizeof(hrim_actuator_gripper_srvs__srv__GoalGripper_Request),
  GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_member_array,  // message members
  GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_type_support_handle = {
  0,
  &GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)() {
  if (!GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_type_support_handle.typesupport_identifier) {
    GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalGripper_Request__rosidl_typesupport_introspection_c__GoalGripper_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__functions.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrim_actuator_gripper_srvs__srv__GoalGripper_Response__init(message_memory);
}

void GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_fini_function(void * message_memory)
{
  hrim_actuator_gripper_srvs__srv__GoalGripper_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_member_array[1] = {
  {
    "goal_accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrim_actuator_gripper_srvs__srv__GoalGripper_Response, goal_accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_members = {
  "hrim_actuator_gripper_srvs__srv",  // message namespace
  "GoalGripper_Response",  // message name
  1,  // number of fields
  sizeof(hrim_actuator_gripper_srvs__srv__GoalGripper_Response),
  GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_member_array,  // message members
  GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_type_support_handle = {
  0,
  &GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)() {
  if (!GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_type_support_handle.typesupport_identifier) {
    GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoalGripper_Response__rosidl_typesupport_introspection_c__GoalGripper_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrim_actuator_gripper_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrim_actuator_gripper_srvs/srv/detail/goal_gripper__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_members = {
  "hrim_actuator_gripper_srvs__srv",  // service namespace
  "GoalGripper",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_Request_message_type_support_handle,
  NULL  // response message
  // hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_type_support_handle = {
  0,
  &hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrim_actuator_gripper_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper)() {
  if (!hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_type_support_handle.typesupport_identifier) {
    hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrim_actuator_gripper_srvs, srv, GoalGripper_Response)()->data;
  }

  return &hrim_actuator_gripper_srvs__srv__detail__goal_gripper__rosidl_typesupport_introspection_c__GoalGripper_service_type_support_handle;
}
