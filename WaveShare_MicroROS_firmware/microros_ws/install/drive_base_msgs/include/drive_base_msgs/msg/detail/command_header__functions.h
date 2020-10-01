// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from drive_base_msgs:msg/CommandHeader.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_HEADER__FUNCTIONS_H_
#define DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_HEADER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "drive_base_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "drive_base_msgs/msg/detail/command_header__struct.h"

/// Initialize msg/CommandHeader message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * drive_base_msgs__msg__CommandHeader
 * )) before or use
 * drive_base_msgs__msg__CommandHeader__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
bool
drive_base_msgs__msg__CommandHeader__init(drive_base_msgs__msg__CommandHeader * msg);

/// Finalize msg/CommandHeader message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
void
drive_base_msgs__msg__CommandHeader__fini(drive_base_msgs__msg__CommandHeader * msg);

/// Create msg/CommandHeader message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * drive_base_msgs__msg__CommandHeader__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
drive_base_msgs__msg__CommandHeader *
drive_base_msgs__msg__CommandHeader__create();

/// Destroy msg/CommandHeader message.
/**
 * It calls
 * drive_base_msgs__msg__CommandHeader__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
void
drive_base_msgs__msg__CommandHeader__destroy(drive_base_msgs__msg__CommandHeader * msg);


/// Initialize array of msg/CommandHeader messages.
/**
 * It allocates the memory for the number of elements and calls
 * drive_base_msgs__msg__CommandHeader__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
bool
drive_base_msgs__msg__CommandHeader__Sequence__init(drive_base_msgs__msg__CommandHeader__Sequence * array, size_t size);

/// Finalize array of msg/CommandHeader messages.
/**
 * It calls
 * drive_base_msgs__msg__CommandHeader__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
void
drive_base_msgs__msg__CommandHeader__Sequence__fini(drive_base_msgs__msg__CommandHeader__Sequence * array);

/// Create array of msg/CommandHeader messages.
/**
 * It allocates the memory for the array and calls
 * drive_base_msgs__msg__CommandHeader__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
drive_base_msgs__msg__CommandHeader__Sequence *
drive_base_msgs__msg__CommandHeader__Sequence__create(size_t size);

/// Destroy array of msg/CommandHeader messages.
/**
 * It calls
 * drive_base_msgs__msg__CommandHeader__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_drive_base_msgs
void
drive_base_msgs__msg__CommandHeader__Sequence__destroy(drive_base_msgs__msg__CommandHeader__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_HEADER__FUNCTIONS_H_
