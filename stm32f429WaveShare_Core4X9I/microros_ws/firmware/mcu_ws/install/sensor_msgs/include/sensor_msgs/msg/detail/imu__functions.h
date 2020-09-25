// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensor_msgs:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__IMU__FUNCTIONS_H_
#define SENSOR_MSGS__MSG__DETAIL__IMU__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_msgs/msg/detail/imu__struct.h"

/// Initialize msg/Imu message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_msgs__msg__Imu
 * )) before or use
 * sensor_msgs__msg__Imu__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Imu__init(sensor_msgs__msg__Imu * msg);

/// Finalize msg/Imu message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Imu__fini(sensor_msgs__msg__Imu * msg);

/// Create msg/Imu message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_msgs__msg__Imu__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__Imu *
sensor_msgs__msg__Imu__create();

/// Destroy msg/Imu message.
/**
 * It calls
 * sensor_msgs__msg__Imu__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Imu__destroy(sensor_msgs__msg__Imu * msg);


/// Initialize array of msg/Imu messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_msgs__msg__Imu__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
bool
sensor_msgs__msg__Imu__Sequence__init(sensor_msgs__msg__Imu__Sequence * array, size_t size);

/// Finalize array of msg/Imu messages.
/**
 * It calls
 * sensor_msgs__msg__Imu__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Imu__Sequence__fini(sensor_msgs__msg__Imu__Sequence * array);

/// Create array of msg/Imu messages.
/**
 * It allocates the memory for the array and calls
 * sensor_msgs__msg__Imu__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
sensor_msgs__msg__Imu__Sequence *
sensor_msgs__msg__Imu__Sequence__create(size_t size);

/// Destroy array of msg/Imu messages.
/**
 * It calls
 * sensor_msgs__msg__Imu__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_msgs
void
sensor_msgs__msg__Imu__Sequence__destroy(sensor_msgs__msg__Imu__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__MSG__DETAIL__IMU__FUNCTIONS_H_
