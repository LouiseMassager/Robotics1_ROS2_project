// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hrim_actuator_rotaryservo_actions:action/GoalJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__FUNCTIONS_H_
#define HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hrim_actuator_rotaryservo_actions/msg/rosidl_generator_c__visibility_control.h"

#include "hrim_actuator_rotaryservo_actions/action/detail/goal_joint_trajectory__struct.h"

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Goal__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Result__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_Feedback__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Request__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_SendGoal_Response__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Request__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_GetResult_Response__Sequence * array);

/// Initialize action/GoalJointTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage
 * )) before or use
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg);

/// Finalize action/GoalJointTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg);

/// Create action/GoalJointTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__create();

/// Destroy action/GoalJointTrajectory message.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage * msg);


/// Initialize array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
bool
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__init(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__fini(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/GoalJointTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence *
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/GoalJointTrajectory messages.
/**
 * It calls
 * hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrim_actuator_rotaryservo_actions
void
hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence__destroy(hrim_actuator_rotaryservo_actions__action__GoalJointTrajectory_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // HRIM_ACTUATOR_ROTARYSERVO_ACTIONS__ACTION__DETAIL__GOAL_JOINT_TRAJECTORY__FUNCTIONS_H_
