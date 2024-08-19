#include "Camera_Tactical_DataAsset.h"

UCamera_Tactical_DataAsset::UCamera_Tactical_DataAsset() {
    this->GamePad_Rotation_Speed = 0.00f;
    this->Keyboard_Rotation_Speed = 0.00f;
    this->Rotation_Lag_Value = 0.00f;
    this->Zoom_Indoor_Min = 0.00f;
    this->Zoom_Indoor_Max = 0.00f;
    this->Zoom_Outdoor_Min = 0.00f;
    this->Zoom_Outdoor_Max = 0.00f;
    this->Keyboard_Zoom_Speed = 0.00f;
    this->Gamepad_Zoom_Speed = 0.00f;
    this->Zoom_Incline = 0.00f;
    this->Zoom_LagValue = 0.00f;
    this->Move_Speed_Min_MinZoom = 0.00f;
    this->Move_Speed_Max_MinZoom = 0.00f;
    this->Move_Speed_Min_MaxZoom = 0.00f;
    this->Move_Speed_Max_MaxZoom = 0.00f;
    this->Move_Curve_Acceleration = NULL;
    this->Move_Acceleration_Duration = 0.00f;
    this->Keyboard_MoveCameraByCursor_BorderSize_XScreenPercentage = 0.00f;
    this->CameraRotation_Discrete_Angle = 0.00f;
}


