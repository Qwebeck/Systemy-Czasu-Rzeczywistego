#ifndef __OCARINA_GENERATED_DEPLOYMENT_H_
#define __OCARINA_GENERATED_DEPLOYMENT_H_ 
#include <po_hi_types.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

#define __PO_HI_MY_NODE standard_room_controller_k

#define __po_hi_the_video_thread_nb_ports 2

#define __po_hi_the_door_sensor_thread_nb_ports 2

#define __po_hi_the_window_sensor_thread_nb_ports 2

#define __po_hi_the_pin_device_thread_nb_ports 2

#define __po_hi_the_movement_sensor_thread_nb_ports 2

#define __po_hi_the_access_control_thread_nb_ports 4

/*  For each node in the distributed application add an enumerator*/

typedef enum
{
  standard_room_controller_k = 0
} __po_hi_node_t;

typedef enum
{
  invalid_protocol = -1
} __po_hi_protocol_t;

/*  For each thread in the distributed application nodes, add an enumerator*/

typedef enum
{
  standard_room_controller_the_video_thread_k_entity = 0,
  standard_room_controller_the_door_sensor_thread_k_entity = 1,
  standard_room_controller_the_window_sensor_thread_k_entity = 2,
  standard_room_controller_the_pin_device_thread_k_entity = 3,
  standard_room_controller_the_movement_sensor_thread_k_entity = 4,
  standard_room_controller_the_access_control_thread_k_entity = 5,
  invalid_entity = -1,
  global_controller_the_alarm_control_thread_k_entity = 6
} __po_hi_entity_t;

typedef enum
{
  standard_room_controller_the_video_thread_k = 0,
  standard_room_controller_the_door_sensor_thread_k = 1,
  standard_room_controller_the_window_sensor_thread_k = 2,
  standard_room_controller_the_pin_device_thread_k = 3,
  standard_room_controller_the_movement_sensor_thread_k = 4,
  standard_room_controller_the_access_control_thread_k = 5,
  invalid_task_id = -1
} __po_hi_task_id;

typedef enum
{
  invalid_device_id = -1
} __po_hi_device_id;

typedef enum
{
  invalid_bus_id = -1,
  bus_mem_bus = 0,
  bus_mem_bus1 = 1
} __po_hi_bus_id;

#define __PO_HI_NB_TASKS 6

#define __PO_HI_TASKS_STACK 0

#define __PO_HI_NB_PROTECTED 0

#define __PO_HI_NB_NODES 1

#define __PO_HI_NB_ENTITIES 7

#define __PO_HI_NB_PORTS 16

typedef enum
{
  the_video_thread_global_video_stream = 0,
  the_video_thread_global_person_on_video_detected = 1,
  the_door_sensor_thread_global_door_state = 2,
  the_door_sensor_thread_global_person_entered = 3,
  the_window_sensor_thread_global_window_state = 4,
  the_window_sensor_thread_global_window_opened = 5,
  the_pin_device_thread_global_entered_pin = 6,
  the_pin_device_thread_global_is_pin_correct = 7,
  the_movement_sensor_thread_global_movement_data = 8,
  the_movement_sensor_thread_global_person_in_room = 9,
  the_access_control_thread_global_is_pin_correct = 10,
  the_access_control_thread_global_person_on_video_detected = 11,
  the_access_control_thread_global_person_entered = 12,
  the_access_control_thread_global_access_type = 13,
  invalid_port_t = -1,
  constant_out_identifier = 15,
  the_alarm_control_thread_global_access_type = 14,
  the_alarm_control_thread_global_turn_on_alarm = 15,
  constant_out_identifier = 17
} __po_hi_port_t;

typedef enum
{
  the_video_thread_local_video_stream = 0,
  the_video_thread_local_person_on_video_detected = 1,
  the_door_sensor_thread_local_door_state = 0,
  the_door_sensor_thread_local_person_entered = 1,
  the_window_sensor_thread_local_window_state = 0,
  the_window_sensor_thread_local_window_opened = 1,
  the_pin_device_thread_local_entered_pin = 0,
  the_pin_device_thread_local_is_pin_correct = 1,
  the_movement_sensor_thread_local_movement_data = 0,
  the_movement_sensor_thread_local_person_in_room = 1,
  the_access_control_thread_local_is_pin_correct = 0,
  the_access_control_thread_local_person_on_video_detected = 1,
  the_access_control_thread_local_person_entered = 2,
  the_access_control_thread_local_access_type = 3,
  invalid_local_port_t = -1,
  the_alarm_control_thread_local_access_type = 0,
  the_alarm_control_thread_local_turn_on_alarm = 1
} __po_hi_local_port_t;

#define __PO_HI_NB_DEVICES 0

#define __PO_HI_NB_BUSES 2

#define __PO_HI_NB_PROTOCOLS 0

#define __PO_HI_PORT_TYPE_CONTENT __po_hi_the_video_thread_nb_ports, __po_hi_the_door_sensor_thread_nb_ports, __po_hi_the_window_sensor_thread_nb_ports, __po_hi_the_pin_device_thread_nb_ports, __po_hi_the_movement_sensor_thread_nb_ports, __po_hi_the_access_control_thread_nb_ports

#endif
