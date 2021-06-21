--------------------------------------------------------
--  This file was automatically generated by Ocarina  --
--  Do NOT hand-modify this file, as your             --
--  changes will be lost when you re-run Ocarina      --
--------------------------------------------------------
pragma Style_Checks
 ("NM32766");

with PolyORB_HI_Generated;
with PolyORB_HI.Marshallers_G;
pragma Elaborate_All (PolyORB_HI.Marshallers_G);

package body PolyORB_HI_Generated.Marshallers is

  --  Marshallers for interface type of thread video_thread.i

  --------------
  -- Marshall -- 
  --------------

  procedure Marshall
   (Data : PolyORB_HI_Generated.Activity.threads_video_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    use PolyORB_HI_Generated.Activity;
  begin
    if (Data.Port
      = PolyORB_HI_Generated.Activity.person_on_video_detected)
    then
      PolyORB_HI_Generated.Marshallers.Marshall
       (Data.person_on_video_detected_DATA,
        Message);
    end if;
  end Marshall;

  ----------------
  -- Unmarshall -- 
  ----------------

  procedure Unmarshall
   (Port : PolyORB_HI_Generated.Activity.threads_video_thread_i_Port_Type;
    Data : out PolyORB_HI_Generated.Activity.threads_video_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    video_stream_DATA : PolyORB_HI_Generated.Types.Video_Stream;
    use PolyORB_HI_Generated.Activity;
  begin
    if (Port
      = PolyORB_HI_Generated.Activity.video_stream)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (video_stream_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_video_thread_i_Interface'
         (Port => PolyORB_HI_Generated.Activity.video_stream,
          video_stream_DATA => video_stream_DATA);
    end if;
  end Unmarshall;

  --  Marshallers for DATA type video_stream

  package Video_Stream_Marshallers is
   new PolyORB_HI.Marshallers_G
     (PolyORB_HI_Generated.Types.Video_Stream);

  procedure Marshall
   (Data : PolyORB_HI_Generated.Types.Video_Stream;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Video_Stream_Marshallers.Marshall;

  procedure Unmarshall
   (Data : out PolyORB_HI_Generated.Types.Video_Stream;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Video_Stream_Marshallers.Unmarshall;

  --  Marshallers for DATA type booleanvalue

  package BooleanValue_Marshallers is
   new PolyORB_HI.Marshallers_G
     (PolyORB_HI_Generated.Types.BooleanValue);

  procedure Marshall
   (Data : PolyORB_HI_Generated.Types.BooleanValue;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames BooleanValue_Marshallers.Marshall;

  procedure Unmarshall
   (Data : out PolyORB_HI_Generated.Types.BooleanValue;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames BooleanValue_Marshallers.Unmarshall;

  --  Marshallers for interface type of thread door_sensor_thread.i

  --------------
  -- Marshall -- 
  --------------

  procedure Marshall
   (Data : PolyORB_HI_Generated.Activity.threads_door_sensor_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    use PolyORB_HI_Generated.Activity;
  begin
    if (Data.Port
      = PolyORB_HI_Generated.Activity.person_entered)
    then
      PolyORB_HI_Generated.Marshallers.Marshall
       (Data.person_entered_DATA,
        Message);
    end if;
  end Marshall;

  ----------------
  -- Unmarshall -- 
  ----------------

  procedure Unmarshall
   (Port : PolyORB_HI_Generated.Activity.threads_door_sensor_thread_i_Port_Type;
    Data : out PolyORB_HI_Generated.Activity.threads_door_sensor_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    door_state_DATA : PolyORB_HI_Generated.Types.Door_State;
    use PolyORB_HI_Generated.Activity;
  begin
    if (Port
      = PolyORB_HI_Generated.Activity.door_state)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (door_state_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_door_sensor_thread_i_Interface'
         (Port => PolyORB_HI_Generated.Activity.door_state,
          door_state_DATA => door_state_DATA);
    end if;
  end Unmarshall;

  --  Marshallers for DATA type door_state

  package Door_State_Marshallers is
   new PolyORB_HI.Marshallers_G
     (PolyORB_HI_Generated.Types.Door_State);

  procedure Marshall
   (Data : PolyORB_HI_Generated.Types.Door_State;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Door_State_Marshallers.Marshall;

  procedure Unmarshall
   (Data : out PolyORB_HI_Generated.Types.Door_State;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Door_State_Marshallers.Unmarshall;

  --  Marshallers for interface type of thread window_sensor_thread.i

  --------------
  -- Marshall -- 
  --------------

  procedure Marshall
   (Data : PolyORB_HI_Generated.Activity.threads_window_sensor_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    use PolyORB_HI_Generated.Activity;
  begin
    if (Data.Port
      = PolyORB_HI_Generated.Activity.window_opened)
    then
      PolyORB_HI_Generated.Marshallers.Marshall
       (Data.window_opened_DATA,
        Message);
    end if;
  end Marshall;

  ----------------
  -- Unmarshall -- 
  ----------------

  procedure Unmarshall
   (Port : PolyORB_HI_Generated.Activity.threads_window_sensor_thread_i_Port_Type;
    Data : out PolyORB_HI_Generated.Activity.threads_window_sensor_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    window_state_DATA : PolyORB_HI_Generated.Types.Window_State;
    use PolyORB_HI_Generated.Activity;
  begin
    if (Port
      = PolyORB_HI_Generated.Activity.window_state)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (window_state_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_window_sensor_thread_i_Interface'
         (Port => PolyORB_HI_Generated.Activity.window_state,
          window_state_DATA => window_state_DATA);
    end if;
  end Unmarshall;

  --  Marshallers for DATA type window_state

  package Window_State_Marshallers is
   new PolyORB_HI.Marshallers_G
     (PolyORB_HI_Generated.Types.Window_State);

  procedure Marshall
   (Data : PolyORB_HI_Generated.Types.Window_State;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Window_State_Marshallers.Marshall;

  procedure Unmarshall
   (Data : out PolyORB_HI_Generated.Types.Window_State;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Window_State_Marshallers.Unmarshall;

  --  Marshallers for interface type of thread pin_device_thread.i

  --------------
  -- Marshall -- 
  --------------

  procedure Marshall
   (Data : PolyORB_HI_Generated.Activity.threads_pin_device_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    use PolyORB_HI_Generated.Activity;
  begin
    if (Data.Port
      = PolyORB_HI_Generated.Activity.is_pin_correct)
    then
      PolyORB_HI_Generated.Marshallers.Marshall
       (Data.is_pin_correct_DATA,
        Message);
    end if;
  end Marshall;

  ----------------
  -- Unmarshall -- 
  ----------------

  procedure Unmarshall
   (Port : PolyORB_HI_Generated.Activity.threads_pin_device_thread_i_Port_Type;
    Data : out PolyORB_HI_Generated.Activity.threads_pin_device_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    entered_pin_DATA : PolyORB_HI_Generated.Types.Pin;
    use PolyORB_HI_Generated.Activity;
  begin
    if (Port
      = PolyORB_HI_Generated.Activity.entered_pin)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (entered_pin_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_pin_device_thread_i_Interface'
         (Port => PolyORB_HI_Generated.Activity.entered_pin,
          entered_pin_DATA => entered_pin_DATA);
    end if;
  end Unmarshall;

  --  Marshallers for DATA type pin

  package Pin_Marshallers is
   new PolyORB_HI.Marshallers_G
     (PolyORB_HI_Generated.Types.Pin);

  procedure Marshall
   (Data : PolyORB_HI_Generated.Types.Pin;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Pin_Marshallers.Marshall;

  procedure Unmarshall
   (Data : out PolyORB_HI_Generated.Types.Pin;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Pin_Marshallers.Unmarshall;

  --  Marshallers for interface type of thread movement_sensor_thread.i

  --------------
  -- Marshall -- 
  --------------

  procedure Marshall
   (Data : PolyORB_HI_Generated.Activity.threads_movement_sensor_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    use PolyORB_HI_Generated.Activity;
  begin
    if (Data.Port
      = PolyORB_HI_Generated.Activity.person_in_room)
    then
      PolyORB_HI_Generated.Marshallers.Marshall
       (Data.person_in_room_DATA,
        Message);
    end if;
  end Marshall;

  ----------------
  -- Unmarshall -- 
  ----------------

  procedure Unmarshall
   (Port : PolyORB_HI_Generated.Activity.threads_movement_sensor_thread_i_Port_Type;
    Data : out PolyORB_HI_Generated.Activity.threads_movement_sensor_thread_i_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    movement_data_DATA : PolyORB_HI_Generated.Types.BooleanValue;
    use PolyORB_HI_Generated.Activity;
  begin
    if (Port
      = PolyORB_HI_Generated.Activity.movement_data)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (movement_data_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_movement_sensor_thread_i_Interface'
         (Port => PolyORB_HI_Generated.Activity.movement_data,
          movement_data_DATA => movement_data_DATA);
    end if;
  end Unmarshall;

  --  Marshallers for interface type of thread access_control_thread.impl

  --------------
  -- Marshall -- 
  --------------

  procedure Marshall
   (Data : PolyORB_HI_Generated.Activity.threads_access_control_thread_impl_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    use PolyORB_HI_Generated.Activity;
  begin
    if (Data.Port
      = PolyORB_HI_Generated.Activity.access_type)
    then
      PolyORB_HI_Generated.Marshallers.Marshall
       (Data.access_type_DATA,
        Message);
    end if;
  end Marshall;

  ----------------
  -- Unmarshall -- 
  ----------------

  procedure Unmarshall
   (Port : PolyORB_HI_Generated.Activity.threads_access_control_thread_impl_Port_Type;
    Data : out PolyORB_HI_Generated.Activity.threads_access_control_thread_impl_Interface;
    Message : in out PolyORB_HI.Messages.Message_Type)
  is
    is_pin_correct_DATA : PolyORB_HI_Generated.Types.BooleanValue;
    person_on_video_detected_DATA : PolyORB_HI_Generated.Types.BooleanValue;
    person_entered_DATA : PolyORB_HI_Generated.Types.BooleanValue;
    use PolyORB_HI_Generated.Activity;
  begin
    if (Port
      = PolyORB_HI_Generated.Activity.is_pin_correct)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (is_pin_correct_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_access_control_thread_impl_Interface'
         (Port => PolyORB_HI_Generated.Activity.is_pin_correct,
          is_pin_correct_DATA => is_pin_correct_DATA);
    elsif (Port
      = PolyORB_HI_Generated.Activity.person_on_video_detected)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (person_on_video_detected_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_access_control_thread_impl_Interface'
         (Port => PolyORB_HI_Generated.Activity.person_on_video_detected,
          person_on_video_detected_DATA => person_on_video_detected_DATA);
    elsif (Port
      = PolyORB_HI_Generated.Activity.person_entered)
    then
      PolyORB_HI_Generated.Marshallers.Unmarshall
       (person_entered_DATA,
        Message);
      Data :=
       PolyORB_HI_Generated.Activity.threads_access_control_thread_impl_Interface'
         (Port => PolyORB_HI_Generated.Activity.person_entered,
          person_entered_DATA => person_entered_DATA);
    end if;
  end Unmarshall;

  --  Marshallers for DATA type access_type

  package Access_Type_Marshallers is
   new PolyORB_HI.Marshallers_G
     (PolyORB_HI_Generated.Types.Access_Type);

  procedure Marshall
   (Data : PolyORB_HI_Generated.Types.Access_Type;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Access_Type_Marshallers.Marshall;

  procedure Unmarshall
   (Data : out PolyORB_HI_Generated.Types.Access_Type;
    Message : in out PolyORB_HI.Messages.Message_Type)
   renames Access_Type_Marshallers.Unmarshall;

end PolyORB_HI_Generated.Marshallers;