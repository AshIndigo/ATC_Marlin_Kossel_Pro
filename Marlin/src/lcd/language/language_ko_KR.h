/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Korean
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_KO_KR_H
#define LANGUAGE_KO_KR_H

#define CHARSIZE 1

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" 준비.")
#define MSG_BACK                            _UxGT("뒤로")
#define MSG_SD_INSERTED                     _UxGT("카드 삽입됨")
#define MSG_SD_REMOVED                      _UxGT("카드 제거됨")
#define MSG_LCD_ENDSTOPS                    _UxGT("엔드스탑")
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("소프트 엔드스탑")
#define MSG_MAIN                            _UxGT("뒤로")
#define MSG_ADVANCED_SETTINGS               _UxGT("고급 설정")
#define MSG_CONFIGURATION                   _UxGT("설정")
#define MSG_AUTOSTART                       _UxGT("자동 시작")
#define MSG_DISABLE_STEPPERS                _UxGT("모터 정지")
#define MSG_DEBUG_MENU                      _UxGT("디버깅 메뉴")
#define MSG_PROGRESS_BAR_TEST               _UxGT("프로그레스바 테스트")
#define MSG_AUTO_HOME                       _UxGT("오토홈")
#define MSG_AUTO_HOME_X                     _UxGT("X 홈으로")
#define MSG_AUTO_HOME_Y                     _UxGT("Y 홈으로")
#define MSG_AUTO_HOME_Z                     _UxGT("Z 홈으로")
#define MSG_TMC_Z_CALIBRATION               _UxGT("Z 캘리브레이션")
#define MSG_LEVEL_BED_HOMING                _UxGT("XYZ 홈으로")
#define MSG_LEVEL_BED_WAITING               _UxGT("누르면 시작합니다")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("다음 Point")
#define MSG_LEVEL_BED_DONE                  _UxGT("레벨링 완료!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Fade Height")
#define MSG_SET_HOME_OFFSETS                _UxGT("Set home offsets")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offsets applied")
#define MSG_SET_ORIGIN                      _UxGT("Set origin")
#define MSG_PREHEAT_1                       _UxGT("예열하기 - PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 모두")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" 노즐만")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 베드만")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" conf")
#define MSG_PREHEAT_2                       _UxGT("예열하기 - ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 모두")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" 노즐만")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 베드만")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" conf")
#define MSG_PREHEAT_CUSTOM                  _UxGT("Custom 예열")
#define MSG_COOLDOWN                        _UxGT("식히기")
#define MSG_SWITCH_PS_ON                    _UxGT("스위치 전원 켜기")
#define MSG_SWITCH_PS_OFF                   _UxGT("스위치 전원 끄기")
#define MSG_EXTRUDE                         _UxGT("밀어내기")
#define MSG_RETRACT                         _UxGT("당기기")
#define MSG_MOVE_AXIS                       _UxGT("축 이동")
#define MSG_BED_LEVELING                    _UxGT("베드 레벨링")
#define MSG_LEVEL_BED                       _UxGT("Level bed")
#define MSG_LEVEL_CORNERS                   _UxGT("Level corners")
#define MSG_NEXT_CORNER                     _UxGT("Next corner")
#define MSG_EDITING_STOPPED                 _UxGT("Mesh Editing Stopped")
#define MSG_USER_MENU                       _UxGT("Custom User Commands")
#define MSG_UBL_DOING_G29                   _UxGT("오토레벨링 하기")
#define MSG_UBL_UNHOMED                     _UxGT("Home XYZ first")
#define MSG_UBL_TOOLS                       _UxGT("UBL Tools")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_IDEX_MENU                       _UxGT("IDEX Mode")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Park")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplication")
#define MSG_IDEX_MODE_SCALED_COPY           _UxGT("Scaled copy")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Full control")
#define MSG_IDEX_X_OFFSET                   _UxGT("2nd nozzle X")
#define MSG_IDEX_Y_OFFSET                   _UxGT("2nd nozzle Y")
#define MSG_IDEX_Z_OFFSET                   _UxGT("2nd nozzle Z")
#define MSG_IDEX_SAVE_OFFSETS               _UxGT("Save Offsets")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Manually Build Mesh")
#define MSG_UBL_BC_INSERT                   _UxGT("Place shim & measure")
#define MSG_UBL_BC_INSERT2                  _UxGT("Measure")
#define MSG_UBL_BC_REMOVE                   _UxGT("Remove & measure bed")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Moving to next")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Activate UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Deactivate UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Bed Temp")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Hotend Temp")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Mesh Edit")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Edit Custom Mesh")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Fine Tuning Mesh")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Done Editing Mesh")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Build Custom Mesh")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Build Mesh")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("Build PLA Mesh")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("Build ABS Mesh")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Build Cold Mesh")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Adjust Mesh Height")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Height Amount")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Validate Mesh")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Validate PLA Mesh")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Validate ABS Mesh")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Validate Custom Mesh")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continue Bed Mesh")
#define MSG_UBL_MESH_LEVELING               _UxGT("Mesh Leveling")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-Point Leveling")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Grid Mesh Leveling")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Level Mesh")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Side Points")
#define MSG_UBL_MAP_TYPE                    _UxGT("Map Type")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Output Mesh Map")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Output for Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Output for CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Off Printer Backup")
#define MSG_UBL_INFO_UBL                    _UxGT("Output UBL Info")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Edit Mesh")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Fill-in Amount")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Manual Fill-in")
#define MSG_UBL_SMART_FILLIN                _UxGT("Smart Fill-in")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Fill-in Mesh")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Invalidate All")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Invalidate Closest")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Fine Tune All")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Fine Tune Closest")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Mesh Storage")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Memory Slot")
#define MSG_UBL_LOAD_MESH                   _UxGT("Load Bed Mesh")
#define MSG_UBL_SAVE_MESH                   _UxGT("Save Bed Mesh")
#define MSG_MESH_LOADED                     _UxGT("Mesh %i loaded")
#define MSG_MESH_SAVED                      _UxGT("Mesh %i saved")
#define MSG_NO_STORAGE                      _UxGT("No storage")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: UBL Save")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: UBL Restore")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Offset Stopped")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("Step-By-Step UBL")

#define MSG_LED_CONTROL                     _UxGT("LED Control")
#define MSG_LEDS                            _UxGT("Lights")
#define MSG_LED_PRESETS                     _UxGT("Light Presets")
#define MSG_SET_LEDS_RED                    _UxGT("Red")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Orange")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Yellow")
#define MSG_SET_LEDS_GREEN                  _UxGT("Green")
#define MSG_SET_LEDS_BLUE                   _UxGT("Blue")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Violet")
#define MSG_SET_LEDS_WHITE                  _UxGT("White")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Default")
#define MSG_CUSTOM_LEDS                     _UxGT("Custom Lights")
#define MSG_INTENSITY_R                     _UxGT("Red Intensity")
#define MSG_INTENSITY_G                     _UxGT("Green Intensity")
#define MSG_INTENSITY_B                     _UxGT("Blue Intensity")
#define MSG_INTENSITY_W                     _UxGT("White Intensity")
#define MSG_LED_BRIGHTNESS                  _UxGT("Brightness")

#define MSG_MOVING                          _UxGT("Moving...")
#define MSG_FREE_XY                         _UxGT("Free XY")
#define MSG_MOVE_X                          _UxGT("Move X")
#define MSG_MOVE_Y                          _UxGT("Move Y")
#define MSG_MOVE_Z                          _UxGT("Move Z")
#define MSG_MOVE_E                          _UxGT("Extruder")
#define MSG_MOVE_01MM                       _UxGT("Move 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Move 1mm")
#define MSG_MOVE_10MM                       _UxGT("Move 10mm")
#define MSG_SPEED                           _UxGT("Speed")
#define MSG_BED_Z                           _UxGT("Bed Z")
#define MSG_NOZZLE                          _UxGT("노즐")
#define MSG_BED                             _UxGT("베드")
#define MSG_FAN_SPEED                       _UxGT("펜 속도")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("엑스트라 펜 속도")
#define MSG_FLOW                            _UxGT("Flow")
#define MSG_CONTROL                         _UxGT("Control")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("Autotemp")
#define MSG_ON                              _UxGT("On ")
#define MSG_OFF                             _UxGT("Off")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Select")
#define MSG_ACC                             _UxGT("Accel")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-jerk")
  #define MSG_VB_JERK                       _UxGT("Vb-jerk")
  #define MSG_VC_JERK                       _UxGT("Vc-jerk")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-jerk")
  #define MSG_VB_JERK                       _UxGT("Vy-jerk")
  #define MSG_VC_JERK                       _UxGT("Vz-jerk")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-jerk")
#define MSG_JUNCTION_DEVIATION              _UxGT("Junction Dev")
#define MSG_VELOCITY                        _UxGT("Velocity")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#define MSG_ACCELERATION                    _UxGT("Acceleration")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-retract")
#define MSG_A_TRAVEL                        _UxGT("A-travel")
#define MSG_STEPS_PER_MM                    _UxGT("Steps/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Asteps/mm")
  #define MSG_BSTEPS                        _UxGT("Bsteps/mm")
  #define MSG_CSTEPS                        _UxGT("Csteps/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Xsteps/mm")
  #define MSG_BSTEPS                        _UxGT("Ysteps/mm")
  #define MSG_CSTEPS                        _UxGT("Zsteps/mm")
#endif
#define MSG_ESTEPS                          _UxGT("Esteps/mm")
#define MSG_E1STEPS                         _UxGT("E1steps/mm")
#define MSG_E2STEPS                         _UxGT("E2steps/mm")
#define MSG_E3STEPS                         _UxGT("E3steps/mm")
#define MSG_E4STEPS                         _UxGT("E4steps/mm")
#define MSG_E5STEPS                         _UxGT("E5steps/mm")
#define MSG_E6STEPS                         _UxGT("E6steps/mm")
#define MSG_TEMPERATURE                     _UxGT("온도")
#define MSG_MOTION                          _UxGT("동작")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Dia.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Unload mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Load mm")
#define MSG_ADVANCE_K                       _UxGT("Advance K")
#define MSG_CONTRAST                        _UxGT("LCD contrast")
#define MSG_STORE_EEPROM                    _UxGT("설정 저장하기")
#define MSG_LOAD_EEPROM                     _UxGT("설정 읽어오기")
#define MSG_RESTORE_FAILSAFE                _UxGT("설정 되돌리기")
#define MSG_INIT_EEPROM                     _UxGT("EEPROM 초기화")
#define MSG_REFRESH                         _UxGT("새로고침")
#define MSG_WATCH                           _UxGT("처음으로")
#define MSG_PREPARE                         _UxGT("준비하기")
#define MSG_TUNE                            _UxGT("Tune")
#define MSG_PAUSE_PRINT                     _UxGT("일시정지")
#define MSG_RESUME_PRINT                    _UxGT("재시작")
#define MSG_STOP_PRINT                      _UxGT("출력중지")
#define MSG_POWER_LOSS_RECOVERY             _UxGT("Power-Loss Recovery")
#define MSG_CARD_MENU                       _UxGT("SD 카드출력")
#define MSG_NO_CARD                         _UxGT("SD 카드없음")
#define MSG_DWELL                           _UxGT("슬립모드...")
#define MSG_USERWAIT                        _UxGT("Click to resume...")
#define MSG_PRINT_PAUSED                    _UxGT("일시 정지됨")
#define MSG_PRINTING                        _UxGT("출력중...")
#define MSG_PRINT_ABORTED                   _UxGT("취소됨")
#define MSG_NO_MOVE                         _UxGT("No move.")
#define MSG_KILLED                          _UxGT("죽음. ")
#define MSG_STOPPED                         _UxGT("멈춤. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retract mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retract  V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Hop mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")
#define MSG_FILAMENTCHANGE                  _UxGT("Change filament")
#define MSG_FILAMENTLOAD                    _UxGT("Load filament")
#define MSG_FILAMENTUNLOAD                  _UxGT("Unload filament")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Unload All")
#define MSG_INIT_SDCARD                     _UxGT("Init. SD card")
#define MSG_CNG_SDCARD                      _UxGT("Change SD card")
#define MSG_ZPROBE_OUT                      _UxGT("Z Probe past bed")
#define MSG_SKEW_FACTOR                     _UxGT("Skew Factor")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")
#define MSG_BLTOUCH_RESET                   _UxGT("Reset BLTouch")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("Deploy BLTouch")
#define MSG_BLTOUCH_STOW                    _UxGT("Stow BLTouch")
#define MSG_MANUAL_DEPLOY                   _UxGT("Deploy Z-Probe")
#define MSG_MANUAL_STOW                     _UxGT("Stow Z-Probe")
#define MSG_HOME                            _UxGT("Home") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("first")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Probe Z Offset")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop abort")
#define MSG_HEATING_FAILED_LCD              _UxGT("Heating failed")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Bed heating failed")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Err: REDUNDANT TEMP")
#define MSG_THERMAL_RUNAWAY                 _UxGT("THERMAL RUNAWAY")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("BED THERMAL RUNAWAY")
#define MSG_ERR_MAXTEMP                     _UxGT("Err: MAXTEMP")
#define MSG_ERR_MINTEMP                     _UxGT("Err: MINTEMP")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Err: MAXTEMP BED")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Err: MINTEMP BED")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("PRINTER HALTED")
#define MSG_PLEASE_RESET                    _UxGT("Please reset")
#define MSG_SHORT_DAY                       _UxGT("d") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#define MSG_HEATING                         _UxGT("Heating...")
#define MSG_COOLING                         _UxGT("Cooling...")
#define MSG_BED_HEATING                     _UxGT("Bed heating...")
#define MSG_BED_COOLING                     _UxGT("Bed cooling...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Calibration")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrate X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrate Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrate Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrate Center")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta Settings")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto Calibration")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Set Delta Height")
#define MSG_DELTA_Z_OFFSET_CALIBRATE        _UxGT("Probe Z-offset")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag Rod")
#define MSG_DELTA_HEIGHT                    _UxGT("Height")
#define MSG_DELTA_RADIUS                    _UxGT("Radius")
#define MSG_INFO_MENU                       _UxGT("About Printer")
#define MSG_INFO_PRINTER_MENU               _UxGT("Printer Info")
#define MSG_3POINT_LEVELING                 _UxGT("3-Point Leveling")
#define MSG_LINEAR_LEVELING                 _UxGT("Linear Leveling")
#define MSG_BILINEAR_LEVELING               _UxGT("Bilinear Leveling")
#define MSG_UBL_LEVELING                    _UxGT("Unified Bed Leveling")
#define MSG_MESH_LEVELING                   _UxGT("Mesh Leveling")
#define MSG_INFO_STATS_MENU                 _UxGT("Printer Stats")
#define MSG_INFO_BOARD_MENU                 _UxGT("Board Info")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Thermistors")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extruders")
#define MSG_INFO_BAUDRATE                   _UxGT("Baud")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocol")
#define MSG_CASE_LIGHT                      _UxGT("Case light")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Light Brightness")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Print Count")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed")
  #define MSG_INFO_PRINT_TIME               _UxGT("Total print time")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Longest job time")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Extruded total")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Prints")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Completed")
  #define MSG_INFO_PRINT_TIME               _UxGT("Total")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Longest")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Extruded")
#endif
#define MSG_INFO_MIN_TEMP                   _UxGT("Min Temp")
#define MSG_INFO_MAX_TEMP                   _UxGT("Max Temp")
#define MSG_INFO_PSU                        _UxGT("PSU")
#define MSG_DRIVE_STRENGTH                  _UxGT("Drive Strength")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("DAC EEPROM Write")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("LOAD FILAMENT")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("UNLOAD FILAMENT")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Purge more")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Continue")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Nozzle: ")
#define MSG_RUNOUT_SENSOR_ENABLE            _UxGT("Runout Sensor")
#define MSG_ERR_HOMING_FAILED               _UxGT("Homing failed")
#define MSG_ERR_PROBING_FAILED              _UxGT("Probing failed")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Too cold")

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Wait for start")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("of the filament")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("change")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filament unload")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("and press button")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("to continue...")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Press button to")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("heat nozzle.")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Heating nozzle")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Please wait...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filament load")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Wait for")
  #define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("filament purge")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Wait for print")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("to resume")
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Please wait...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ejecting...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Insert and Click")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Click to heat")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Heating...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Loading...")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Purging...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Resuming...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_KO_KR_H
