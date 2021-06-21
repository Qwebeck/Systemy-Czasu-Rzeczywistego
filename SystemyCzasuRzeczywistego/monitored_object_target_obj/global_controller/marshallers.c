#include <types.h>
#include <po_hi_types.h>
#include <po_hi_marshallers.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/
void __po_hi_marshall_type_access_type 
    (threads__access_type value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_int32 (value, message, offset);
}

void __po_hi_unmarshall_type_access_type 
    (threads__access_type* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_int32 ((__po_hi_int32_t*)value, message, offset);
}

void __po_hi_marshall_type_booleanvalue 
    (threads__booleanvalue value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_int (value, message, offset);
}

void __po_hi_unmarshall_type_booleanvalue 
    (threads__booleanvalue* value,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_int (value, message, offset);
}

void __po_hi_marshall_request_the_alarm_control_thread_access_type 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_access_type (request->vars.the_alarm_control_thread_global_access_type.the_alarm_control_thread_global_access_type, message, offset);
}

void __po_hi_unmarshall_request_the_alarm_control_thread_access_type 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_access_type (&(request->vars.the_alarm_control_thread_global_access_type.the_alarm_control_thread_global_access_type), message, offset);
}

void __po_hi_marshall_request_the_alarm_control_thread_turn_on_alarm 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_marshall_type_booleanvalue (request->vars.the_alarm_control_thread_global_turn_on_alarm.the_alarm_control_thread_global_turn_on_alarm, message, offset);
}

void __po_hi_unmarshall_request_the_alarm_control_thread_turn_on_alarm 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message,
    __po_hi_uint32_t* offset)
{

  __po_hi_unmarshall_type_booleanvalue (&(request->vars.the_alarm_control_thread_global_turn_on_alarm.the_alarm_control_thread_global_turn_on_alarm), message, offset);
}

void __po_hi_marshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message)
{
  __po_hi_uint32_t offset;

  offset = 0;
  __po_hi_marshall_port (request->port, message);
  switch (request->port)
  {
    case the_alarm_control_thread_global_access_type:
    {
      __po_hi_marshall_request_the_alarm_control_thread_access_type (request, message, &(offset));

      break;
    }
    case the_alarm_control_thread_global_turn_on_alarm:
    {
      __po_hi_marshall_request_the_alarm_control_thread_turn_on_alarm (request, message, &(offset));

      break;
    }
    default:
    {
      break;
    }
  }
}

void __po_hi_unmarshall_request 
    (__po_hi_request_t* request,
    __po_hi_msg_t* message)
{
  __po_hi_uint32_t offset;

  offset = 0;
  __po_hi_unmarshall_port (&(request->port), message);
  switch (request->port)
  {
    case the_alarm_control_thread_global_access_type:
    {
      __po_hi_unmarshall_request_the_alarm_control_thread_access_type (request, message, &(offset));

      break;
    }
    case the_alarm_control_thread_global_turn_on_alarm:
    {
      __po_hi_unmarshall_request_the_alarm_control_thread_turn_on_alarm (request, message, &(offset));

      break;
    }
    default:
    {
      break;
    }
  }
}

