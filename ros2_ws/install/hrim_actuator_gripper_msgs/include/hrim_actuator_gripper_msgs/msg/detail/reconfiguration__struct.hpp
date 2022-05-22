// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrim_actuator_gripper_msgs:msg/Reconfiguration.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__RECONFIGURATION__STRUCT_HPP_
#define HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__RECONFIGURATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrim_actuator_gripper_msgs__msg__Reconfiguration __attribute__((deprecated))
#else
# define DEPRECATED__hrim_actuator_gripper_msgs__msg__Reconfiguration __declspec(deprecated)
#endif

namespace hrim_actuator_gripper_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Reconfiguration_
{
  using Type = Reconfiguration_<ContainerAllocator>;

  explicit Reconfiguration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    orientation(_init),
    angular_velocity(_init),
    linear_acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->orientation_covariance.begin(), this->orientation_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->angular_velocity_covariance.begin(), this->angular_velocity_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->linear_acceleration_covariance.begin(), this->linear_acceleration_covariance.end(), 0.0);
    }
  }

  explicit Reconfiguration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    orientation(_alloc, _init),
    orientation_covariance(_alloc),
    angular_velocity(_alloc, _init),
    angular_velocity_covariance(_alloc),
    linear_acceleration(_alloc, _init),
    linear_acceleration_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 9>::iterator, double>(this->orientation_covariance.begin(), this->orientation_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->angular_velocity_covariance.begin(), this->angular_velocity_covariance.end(), 0.0);
      std::fill<typename std::array<double, 9>::iterator, double>(this->linear_acceleration_covariance.begin(), this->linear_acceleration_covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _orientation_covariance_type =
    std::array<double, 9>;
  _orientation_covariance_type orientation_covariance;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _angular_velocity_covariance_type =
    std::array<double, 9>;
  _angular_velocity_covariance_type angular_velocity_covariance;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _linear_acceleration_covariance_type =
    std::array<double, 9>;
  _linear_acceleration_covariance_type linear_acceleration_covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__orientation_covariance(
    const std::array<double, 9> & _arg)
  {
    this->orientation_covariance = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity_covariance(
    const std::array<double, 9> & _arg)
  {
    this->angular_velocity_covariance = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__linear_acceleration_covariance(
    const std::array<double, 9> & _arg)
  {
    this->linear_acceleration_covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrim_actuator_gripper_msgs__msg__Reconfiguration
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrim_actuator_gripper_msgs__msg__Reconfiguration
    std::shared_ptr<hrim_actuator_gripper_msgs::msg::Reconfiguration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Reconfiguration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->orientation_covariance != other.orientation_covariance) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->angular_velocity_covariance != other.angular_velocity_covariance) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->linear_acceleration_covariance != other.linear_acceleration_covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Reconfiguration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Reconfiguration_

// alias to use template instance with default allocator
using Reconfiguration =
  hrim_actuator_gripper_msgs::msg::Reconfiguration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hrim_actuator_gripper_msgs

#endif  // HRIM_ACTUATOR_GRIPPER_MSGS__MSG__DETAIL__RECONFIGURATION__STRUCT_HPP_