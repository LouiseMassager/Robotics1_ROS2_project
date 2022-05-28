// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hrim_actuator_rotaryservo_msgs:msg/Reconfiguration.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__RECONFIGURATION__TRAITS_HPP_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__RECONFIGURATION__TRAITS_HPP_

#include "hrim_actuator_rotaryservo_msgs/msg/detail/reconfiguration__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration>()
{
  return "hrim_actuator_rotaryservo_msgs::msg::Reconfiguration";
}

template<>
inline const char * name<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration>()
{
  return "hrim_actuator_rotaryservo_msgs/msg/Reconfiguration";
}

template<>
struct has_fixed_size<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<hrim_actuator_rotaryservo_msgs::msg::Reconfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__RECONFIGURATION__TRAITS_HPP_
