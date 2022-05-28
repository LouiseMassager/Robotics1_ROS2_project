// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hrim_actuator_rotaryservo_msgs:msg/GoalRotaryServo.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__FUNCTIONS_H_
#define HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hrim_actuator_rotaryservo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hrim_actuator_rotaryservo_msgs/msg/detail/goal_rotary_servo__struct.h"

/// Initialize msg/GoalRotaryServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo
 * )) before or use
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
bool
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__init(hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo * msg);

/// Finalize msg/GoalRotaryServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
void
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__fini(hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo * msg);

/// Create msg/GoalRotaryServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo *
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__create();

/// Destroy msg/GoalRotaryServo message.
/**
 * It calls
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
void
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__destroy(hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo * msg);


/// Initialize array of msg/GoalRotaryServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
bool
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence__init(hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence * array, size_t size);

/// Finalize array of msg/GoalRotaryServo messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
void
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence__fini(hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence * array);

/// Create array of msg/GoalRotaryServo messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence *
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence__create(size_t size);

/// Destroy array of msg/GoalRotaryServo messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_msgs
void
hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence__destroy(hrim_actuator_rotaryservo_msgs__msg__GoalRotaryServo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_MSGS__MSG__DETAIL__GOAL_ROTARY_SERVO__FUNCTIONS_H_
