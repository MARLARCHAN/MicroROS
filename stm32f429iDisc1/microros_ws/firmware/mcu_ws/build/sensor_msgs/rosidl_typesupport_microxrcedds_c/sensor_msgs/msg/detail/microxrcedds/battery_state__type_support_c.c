// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/battery_state__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/battery_state__struct.h"
#include "sensor_msgs/msg/detail/battery_state__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // cell_temperature, cell_voltage
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cell_temperature, cell_voltage
#include "rosidl_runtime_c/string.h"  // location, serial_number
#include "rosidl_runtime_c/string_functions.h"  // location, serial_number
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef sensor_msgs__msg__BatteryState _BatteryState__ros_msg_type;

static bool _BatteryState__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }

  _BatteryState__ros_msg_type * ros_message = (_BatteryState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: voltage
  rv = ucdr_serialize_float(cdr, ros_message->voltage);
  // Member: temperature
  rv = ucdr_serialize_float(cdr, ros_message->temperature);
  // Member: current
  rv = ucdr_serialize_float(cdr, ros_message->current);
  // Member: charge
  rv = ucdr_serialize_float(cdr, ros_message->charge);
  // Member: capacity
  rv = ucdr_serialize_float(cdr, ros_message->capacity);
  // Member: design_capacity
  rv = ucdr_serialize_float(cdr, ros_message->design_capacity);
  // Member: percentage
  rv = ucdr_serialize_float(cdr, ros_message->percentage);
  // Member: power_supply_status
  rv = ucdr_serialize_uint8_t(cdr, ros_message->power_supply_status);
  // Member: power_supply_health
  rv = ucdr_serialize_uint8_t(cdr, ros_message->power_supply_health);
  // Member: power_supply_technology
  rv = ucdr_serialize_uint8_t(cdr, ros_message->power_supply_technology);
  // Member: present
  rv = ucdr_serialize_bool(cdr, ros_message->present);
  // Member: cell_voltage
  {
    const size_t size = ros_message->cell_voltage.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->cell_voltage.data, size);
  }
  // Member: cell_temperature
  {
    const size_t size = ros_message->cell_temperature.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->cell_temperature.data, size);
  }
  // Member: location
  rv = ucdr_serialize_string(cdr, ros_message->location.data);
  if (rv) {
    ros_message->location.size = strlen(ros_message->location.data);
  }
  // Member: serial_number
  rv = ucdr_serialize_string(cdr, ros_message->serial_number.data);
  if (rv) {
    ros_message->serial_number.size = strlen(ros_message->serial_number.data);
  }

  return rv;
}

static bool _BatteryState__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BatteryState__ros_msg_type * ros_message = (_BatteryState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: voltage
  rv = ucdr_deserialize_float(cdr, &ros_message->voltage);
  // Field name: temperature
  rv = ucdr_deserialize_float(cdr, &ros_message->temperature);
  // Field name: current
  rv = ucdr_deserialize_float(cdr, &ros_message->current);
  // Field name: charge
  rv = ucdr_deserialize_float(cdr, &ros_message->charge);
  // Field name: capacity
  rv = ucdr_deserialize_float(cdr, &ros_message->capacity);
  // Field name: design_capacity
  rv = ucdr_deserialize_float(cdr, &ros_message->design_capacity);
  // Field name: percentage
  rv = ucdr_deserialize_float(cdr, &ros_message->percentage);
  // Field name: power_supply_status
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->power_supply_status);
  // Field name: power_supply_health
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->power_supply_health);
  // Field name: power_supply_technology
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->power_supply_technology);
  // Field name: present
  rv = ucdr_deserialize_bool(cdr, &ros_message->present);
  // Field name: cell_voltage
  {
    uint32_t size;
    const size_t capacity = ros_message->cell_voltage.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->cell_voltage.data, capacity, &size);
    ros_message->cell_voltage.size = size;
  }
  // Field name: cell_temperature
  {
    uint32_t size;
    const size_t capacity = ros_message->cell_temperature.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->cell_temperature.data, capacity, &size);
    ros_message->cell_temperature.size = size;
  }
  // Field name: location
  {
    size_t capacity = ros_message->location.capacity;
    rv = ucdr_deserialize_string(cdr, ros_message->location.data, capacity);
    if (rv) {
      ros_message->location.size = strlen(ros_message->location.data);
    }
  }
  // Field name: serial_number
  {
    size_t capacity = ros_message->serial_number.capacity;
    rv = ucdr_deserialize_string(cdr, ros_message->serial_number.data, capacity);
    if (rv) {
      ros_message->serial_number.size = strlen(ros_message->serial_number.data);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__BatteryState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _BatteryState__ros_msg_type * ros_message = (const _BatteryState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: voltage
  {
    const size_t item_size = sizeof(ros_message->voltage);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: temperature
  {
    const size_t item_size = sizeof(ros_message->temperature);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: current
  {
    const size_t item_size = sizeof(ros_message->current);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: charge
  {
    const size_t item_size = sizeof(ros_message->charge);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: capacity
  {
    const size_t item_size = sizeof(ros_message->capacity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: design_capacity
  {
    const size_t item_size = sizeof(ros_message->design_capacity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: percentage
  {
    const size_t item_size = sizeof(ros_message->percentage);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply_status
  {
    const size_t item_size = sizeof(ros_message->power_supply_status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply_health
  {
    const size_t item_size = sizeof(ros_message->power_supply_health);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply_technology
  {
    const size_t item_size = sizeof(ros_message->power_supply_technology);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: present
  {
    const size_t item_size = sizeof(ros_message->present);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: cell_voltage
  {
    size_t sequence_size = ros_message->cell_voltage.size;
    size_t item_size = sizeof(ros_message->cell_voltage.data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: cell_temperature
  {
    size_t sequence_size = ros_message->cell_temperature.size;
    size_t item_size = sizeof(ros_message->cell_temperature.data[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: location
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->location.size + 1;
  // Member: serial_number
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->serial_number.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _BatteryState__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__BatteryState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__BatteryState(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: voltage
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: temperature
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: current
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: charge
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: capacity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: design_capacity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: percentage
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: power_supply_status
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: power_supply_health
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: power_supply_technology
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: present
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: cell_voltage
  {
    *full_bounded = false;
  }
  // Member: cell_temperature
  {
    *full_bounded = false;
  }
  // Member: location
  *full_bounded = false;
  // Member: serial_number
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _BatteryState__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__BatteryState(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_BatteryState = {
  "sensor_msgs::msg",
  "BatteryState",
  _BatteryState__cdr_serialize,
  _BatteryState__cdr_deserialize,
  _BatteryState__get_serialized_size,
  _BatteryState__max_serialized_size
};

static rosidl_message_type_support_t _BatteryState__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_BatteryState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, BatteryState)() {
  return &_BatteryState__type_support;
}

#if defined(__cplusplus)
}
#endif
