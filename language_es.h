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
 * Spanish
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_ES_H
#define LANGUAGE_ES_H

// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " lista."
#define MSG_SD_INSERTED                     "Tarjeta colocada"
#define MSG_SD_REMOVED                      "Tarjeta retirada"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Inicio automatico"
#define MSG_DISABLE_STEPPERS                "Apagar motores"
#define MSG_AUTO_HOME                       "Llevar al origen"
#define MSG_AUTO_HOME_X                     "Origen X"
#define MSG_AUTO_HOME_Y                     "Origen Y"
#define MSG_AUTO_HOME_Z                     "Origen Z"
#define MSG_LEVEL_BED_HOMING                "Origen XYZ"
#define MSG_LEVEL_BED_WAITING               "Presione para iniciar"
#define MSG_LEVEL_BED_DONE                  "Nivelacion lista!"
#define MSG_LEVEL_BED_CANCEL                "Cancelar"
#define MSG_SET_HOME_OFFSETS                "Ajustar desfases"
#define MSG_HOME_OFFSETS_APPLIED            "Desfase aplicado"
#define MSG_SET_ORIGIN                      "Establecer origen"
#define MSG_PREHEAT_1                       "Precalentar PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 "Todo"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1"Plataforma"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "Config"
#define MSG_PREHEAT_2                       "Precalentar ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 "Todo"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 "Plataforma"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "Config"
#define MSG_H1                              "1"
#define MSG_H2                              "2"
#define MSG_H3                              "3"
#define MSG_H4                              "4"
#define MSG_COOLDOWN                        "Enfriar"
#define MSG_SWITCH_PS_ON                    "Encender"
#define MSG_SWITCH_PS_OFF                   "Apagar"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Retraer"
#define MSG_MOVE_AXIS                       "Mover ejes"
#define MSG_LEVEL_BED                       "Nivelar plataforma"
#define MSG_MOVE_X                          "Mover X"
#define MSG_MOVE_Y                          "Mover Y"
#define MSG_MOVE_Z                          "Mover Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_E1                         "1"
#define MSG_MOVE_E2                         "2"
#define MSG_MOVE_E3                         "3"
#define MSG_MOVE_E4                         "4"
#define MSG_MOVE_01MM                       "Mover 0.1mm"
#define MSG_MOVE_1MM                        "Mover 1mm"
#define MSG_MOVE_10MM                       "Mover 10mm"
#define MSG_SPEED                           "Velocidad"
#define MSG_BED_Z                           "Plataforma Z"
#define MSG_NOZZLE                          "Boquilla"
#define MSG_N1                              " 1"
#define MSG_N2                              " 2"
#define MSG_N3                              " 3"
#define MSG_N4                              " 4"
#define MSG_BED                             "Plataforma"
#define MSG_FAN_SPEED                       "Ventilador"
#define MSG_FLOW                            "Flujo"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Temperatura Automatica"
#define MSG_ON                              "Encender"
#define MSG_OFF                             "Apagar"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_E1                              " E1"
#define MSG_E2                              " E2"
#define MSG_E3                              " E3"
#define MSG_E4                              " E4"
#define MSG_ACC                             "Aceleracion"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax"
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "Vel. viaje min"
#define MSG_AMAX                            "Acel. max"
#define MSG_A_RETRACT                       "Acel. retrac."
#define MSG_A_TRAVEL                        "Acel. Viaje"
#define MSG_XSTEPS                          "X pasos/mm"
#define MSG_YSTEPS                          "Y pasos/mm"
#define MSG_ZSTEPS                          "Z pasos/mm"
#define MSG_ESTEPS                          "E pasos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimiento"
#define MSG_VOLUMETRIC                      "Filamento"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_DIAM_E1                         " 1"
#define MSG_DIAM_E2                         " 2"
#define MSG_DIAM_E3                         " 3"
#define MSG_DIAM_E4                         " 4"
#define MSG_CONTRAST                        "Contraste"
#define MSG_STORE_EPROM                     "Guardar memoria"
#define MSG_LOAD_EPROM                      "Cargar memoria"
#define MSG_RESTORE_FAILSAFE                "Restaurar memoria."
#define MSG_REFRESH                         "Volver a cargar"
#define MSG_WATCH                           "Informacion"
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Ajustar"
#define MSG_PAUSE_PRINT                     "Pausar impresion"
#define MSG_RESUME_PRINT                    "Reanudar impresion"
#define MSG_STOP_PRINT                      "Detener impresion"
#define MSG_CARD_MENU                       "Menu de SD"
#define MSG_NO_CARD                         "No hay tarjeta SD"
#define MSG_DWELL                           "Reposo..."
#define MSG_USERWAIT                        "Esperando ordenes"
#define MSG_RESUMING                        "Resumiendo impre."
#define MSG_PRINT_ABORTED                   "Impresion cancelada"
#define MSG_NO_MOVE                         "Sin movimiento"
#define MSG_KILLED                          "Parada de emergencia."
#define MSG_STOPPED                         "Detenida"
#define MSG_CONTROL_RETRACT                 "Retraer mm"
#define MSG_CONTROL_RETRACT_SWAP            "Interc. Retraer mm"
#define MSG_CONTROL_RETRACTF                "Retraer  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Levantar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Interc. DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet V"
#define MSG_AUTORETRACT                     "Retraccion Auto."
#define MSG_FILAMENTCHANGE                  "Cambiar filamento"
#define MSG_INIT_SDCARD                     "Iniciando tarjeta"
#define MSG_CNG_SDCARD                      "Cambiar tarjeta"
#define MSG_ZPROBE_OUT                      "Sonda Z fuera"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Desfase Z"
#define MSG_BABYSTEP_X                      "Micropaso X"
#define MSG_BABYSTEP_Y                      "Micropaso Y"
#define MSG_BABYSTEP_Z                      "Micropaso Z"
#define MSG_ENDSTOP_ABORT                   "Cancelado - Endstop"
#define MSG_HEATING_FAILED_LCD              "Error: al calentar"
#define MSG_ERR_REDUNDANT_TEMP              "Error: temperatura redundante"
#define MSG_THERMAL_RUNAWAY                 "Error de temperatura"
#define MSG_ERR_MAXTEMP                     "Error: Temp Maxima"
#define MSG_ERR_MINTEMP                     "Error: Temp Minima"
#define MSG_ERR_MAXTEMP_BED                 "Error: Temp Max Plataforma"
#define MSG_ERR_MINTEMP_BED                 "Error: Temp Min Plataforma"
#define MSG_HEATING                         "Calentando..."
#define MSG_HEATING_COMPLETE                "Calentamiento Completo"
#define MSG_BED_HEATING                     "Calentando plataforma ..."
#define MSG_BED_DONE                        "Plataforma Caliente"
#define MSG_DELTA_CALIBRATE                 "Calibracion Delta"
#define MSG_DELTA_CALIBRATE_X               "Calibrar X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrar Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrar Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrar Centro"

#endif // LANGUAGE_ES_H
