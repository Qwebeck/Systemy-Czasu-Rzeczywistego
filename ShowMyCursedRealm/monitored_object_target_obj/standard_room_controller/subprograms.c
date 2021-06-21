#include "subprograms.h"
#include <types.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
void roomcontroller__videothread 
    (threads__video_stream video_stream,
    threads__booleanvalue* person_on_video_detected);
void threads__video_processing_spg 
    (threads__video_stream video_stream,
    threads__booleanvalue* person_on_video_detected)
{

  roomcontroller__videothread (video_stream, person_on_video_detected);
}

void roomcontroller__doorcontrolthread 
    (threads__door_state door_state,
    threads__booleanvalue* door_opened);
void threads__door_sensor_spg 
    (threads__door_state door_state,
    threads__booleanvalue* door_opened)
{

  roomcontroller__doorcontrolthread (door_state, door_opened);
}

void roomcontroller__windowcontrolthread 
    (threads__window_state window_state,
    threads__booleanvalue* window_opened);
void threads__window_sensor_spg 
    (threads__window_state window_state,
    threads__booleanvalue* window_opened)
{

  roomcontroller__windowcontrolthread (window_state, window_opened);
}

void roomcontroller__pincontrolthread 
    (threads__pin entered_pin,
    threads__booleanvalue* is_pin_correct);
void threads__pin_device_spg 
    (threads__pin entered_pin,
    threads__booleanvalue* is_pin_correct)
{

  roomcontroller__pincontrolthread (entered_pin, is_pin_correct);
}

void roomcontroller__movementcontrolthread 
    (threads__booleanvalue movement_data,
    threads__booleanvalue* person_in_room);
void threads__movement_sensor_spg 
    (threads__booleanvalue movement_data,
    threads__booleanvalue* person_in_room)
{

  roomcontroller__movementcontrolthread (movement_data, person_in_room);
}

void roomcontroller__accesscontrolthread 
    (threads__booleanvalue is_pin_correct,
    threads__booleanvalue person_on_video_detected,
    threads__booleanvalue person_entered,
    threads__access_type* access_type);
void threads__access_control_spg 
    (threads__booleanvalue is_pin_correct,
    threads__booleanvalue person_on_video_detected,
    threads__booleanvalue person_entered,
    threads__access_type* access_type)
{

  roomcontroller__accesscontrolthread (is_pin_correct, person_on_video_detected, person_entered, access_type);
}

