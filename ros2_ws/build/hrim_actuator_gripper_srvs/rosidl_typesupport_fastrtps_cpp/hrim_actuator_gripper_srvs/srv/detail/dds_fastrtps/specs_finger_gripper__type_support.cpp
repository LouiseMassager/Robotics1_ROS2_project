// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hrim_actuator_gripper_srvs:srv/SpecsFingerGripper.idl
// generated code does not contain a copyright notice
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hrim_actuator_gripper_srvs/srv/detail/specs_finger_gripper__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_serialize(
  const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
get_serialized_size(
  const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
max_serialized_size_SpecsFingerGripper_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SpecsFingerGripper_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpecsFingerGripper_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpecsFingerGripper_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpecsFingerGripper_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpecsFingerGripper_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SpecsFingerGripper_Request__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "SpecsFingerGripper_Request",
  _SpecsFingerGripper_Request__cdr_serialize,
  _SpecsFingerGripper_Request__cdr_deserialize,
  _SpecsFingerGripper_Request__get_serialized_size,
  _SpecsFingerGripper_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpecsFingerGripper_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpecsFingerGripper_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Request>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_SpecsFingerGripper_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Request)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_SpecsFingerGripper_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_serialize(
  const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: min_force
  cdr << ros_message.min_force;
  // Member: max_force
  cdr << ros_message.max_force;
  // Member: max_payload
  cdr << ros_message.max_payload;
  // Member: min_speed
  cdr << ros_message.min_speed;
  // Member: max_speed
  cdr << ros_message.max_speed;
  // Member: max_acceleration
  cdr << ros_message.max_acceleration;
  // Member: max_length
  cdr << ros_message.max_length;
  // Member: max_angle
  cdr << ros_message.max_angle;
  // Member: repeatability
  cdr << ros_message.repeatability;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & ros_message)
{
  // Member: min_force
  cdr >> ros_message.min_force;

  // Member: max_force
  cdr >> ros_message.max_force;

  // Member: max_payload
  cdr >> ros_message.max_payload;

  // Member: min_speed
  cdr >> ros_message.min_speed;

  // Member: max_speed
  cdr >> ros_message.max_speed;

  // Member: max_acceleration
  cdr >> ros_message.max_acceleration;

  // Member: max_length
  cdr >> ros_message.max_length;

  // Member: max_angle
  cdr >> ros_message.max_angle;

  // Member: repeatability
  cdr >> ros_message.repeatability;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
get_serialized_size(
  const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: min_force
  {
    size_t item_size = sizeof(ros_message.min_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_force
  {
    size_t item_size = sizeof(ros_message.max_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_payload
  {
    size_t item_size = sizeof(ros_message.max_payload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_speed
  {
    size_t item_size = sizeof(ros_message.min_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_speed
  {
    size_t item_size = sizeof(ros_message.max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_acceleration
  {
    size_t item_size = sizeof(ros_message.max_acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_length
  {
    size_t item_size = sizeof(ros_message.max_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_angle
  {
    size_t item_size = sizeof(ros_message.max_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: repeatability
  {
    size_t item_size = sizeof(ros_message.repeatability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hrim_actuator_gripper_srvs
max_serialized_size_SpecsFingerGripper_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: min_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_payload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: repeatability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SpecsFingerGripper_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpecsFingerGripper_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpecsFingerGripper_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpecsFingerGripper_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpecsFingerGripper_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SpecsFingerGripper_Response__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "SpecsFingerGripper_Response",
  _SpecsFingerGripper_Response__cdr_serialize,
  _SpecsFingerGripper_Response__cdr_deserialize,
  _SpecsFingerGripper_Response__get_serialized_size,
  _SpecsFingerGripper_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpecsFingerGripper_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpecsFingerGripper_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_gripper_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<hrim_actuator_gripper_srvs::srv::SpecsFingerGripper_Response>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_SpecsFingerGripper_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Response)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_SpecsFingerGripper_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace hrim_actuator_gripper_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SpecsFingerGripper__callbacks = {
  "hrim_actuator_gripper_srvs::srv",
  "SpecsFingerGripper",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper_Response)(),
};

static rosidl_service_type_support_t _SpecsFingerGripper__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpecsFingerGripper__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace hrim_actuator_gripper_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hrim_actuator_gripper_srvs
const rosidl_service_type_support_t *
get_service_type_support_handle<hrim_actuator_gripper_srvs::srv::SpecsFingerGripper>()
{
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_SpecsFingerGripper__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrim_actuator_gripper_srvs, srv, SpecsFingerGripper)() {
  return &hrim_actuator_gripper_srvs::srv::typesupport_fastrtps_cpp::_SpecsFingerGripper__handle;
}

#ifdef __cplusplus
}
#endif
