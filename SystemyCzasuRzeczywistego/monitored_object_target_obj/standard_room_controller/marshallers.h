#ifndef __OCARINA_GENERATED_MARSHALLERS_H_
#define __OCARINA_GENERATED_MARSHALLERS_H_ 
#include <types.h>
#include <po_hi_messages.h>
#include <po_hi_types.h>
#include <request.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

void __po_hi_marshall_type_video_stream 
    (threads__video_stream value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_video_stream 
    (threads__video_stream* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_booleanvalue 
    (threads__booleanvalue value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_booleanvalue 
    (threads__booleanvalue* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_video_thread_video_stream 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_video_thread_video_stream 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_video_thread_person_on_video_detected 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_video_thread_person_on_video_detected 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_door_state 
    (threads__door_state value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_door_state 
    (threads__door_state* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_door_sensor_thread_door_state 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_door_sensor_thread_door_state 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_door_sensor_thread_person_entered 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_door_sensor_thread_person_entered 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_window_state 
    (threads__window_state value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_window_state 
    (threads__window_state* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_window_sensor_thread_window_state 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_window_sensor_thread_window_state 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_window_sensor_thread_window_opened 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_window_sensor_thread_window_opened 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_pin 
    (threads__pin value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_pin 
    (threads__pin* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_pin_device_thread_entered_pin 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_pin_device_thread_entered_pin 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_pin_device_thread_is_pin_correct 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_pin_device_thread_is_pin_correct 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_movement_sensor_thread_movement_data 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_movement_sensor_thread_movement_data 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_movement_sensor_thread_person_in_room 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_movement_sensor_thread_person_in_room 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_type_access_type 
    (threads__access_type value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_type_access_type 
    (threads__access_type* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_access_control_thread_is_pin_correct 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_access_control_thread_is_pin_correct 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_access_control_thread_person_on_video_detected 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_access_control_thread_person_on_video_detected 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_access_control_thread_person_entered 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_access_control_thread_person_entered 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request_the_access_control_thread_access_type 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_unmarshall_request_the_access_control_thread_access_type 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset);

void __po_hi_marshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message);

void __po_hi_unmarshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message);

#endif
