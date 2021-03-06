--------------------------------------------------------
--  This file was automatically generated by Ocarina  --
--  Do NOT hand-modify this file, as your             --
--  changes will be lost when you re-run Ocarina      --
--------------------------------------------------------
pragma Style_Checks
 ("NM32766");

with RoomController;

package body PolyORB_HI_Generated.Subprograms is

  procedure threads_Video_Processing_Spg
   (video_stream : PolyORB_HI_Generated.Types.Video_Stream;
    person_on_video_detected : out PolyORB_HI_Generated.Types.BooleanValue)
   renames RoomController.VideoThread;

  procedure threads_Door_Sensor_Spg
   (door_state : PolyORB_HI_Generated.Types.Door_State;
    door_opened : out PolyORB_HI_Generated.Types.BooleanValue)
   renames RoomController.DoorControlThread;

  procedure threads_Window_Sensor_Spg
   (window_state : PolyORB_HI_Generated.Types.Window_State;
    window_opened : out PolyORB_HI_Generated.Types.BooleanValue)
   renames RoomController.WindowControlThread;

  procedure threads_Pin_Device_Spg
   (entered_pin : PolyORB_HI_Generated.Types.Pin;
    is_pin_correct : out PolyORB_HI_Generated.Types.BooleanValue)
   renames RoomController.PinControlThread;

  procedure threads_Movement_Sensor_Spg
   (movement_data : PolyORB_HI_Generated.Types.BooleanValue;
    person_in_room : out PolyORB_HI_Generated.Types.BooleanValue)
   renames RoomController.MovementControlThread;

  procedure threads_Access_Control_Spg
   (is_pin_correct : PolyORB_HI_Generated.Types.BooleanValue;
    person_on_video_detected : PolyORB_HI_Generated.Types.BooleanValue;
    person_entered : PolyORB_HI_Generated.Types.BooleanValue;
    access_type : out PolyORB_HI_Generated.Types.Access_Type)
   renames RoomController.AccessControlThread;

end PolyORB_HI_Generated.Subprograms;
