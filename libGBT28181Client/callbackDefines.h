#ifndef _CALLBACK_DEFINES_H_
#define _CALLBACK_DEFINES_H_

#include <stdbool.h>
#include <stdint.h>

typedef void(*function_query_device_info_callback)(char* device_ID, char* device_type, char* manufacturer, char* model, char* firmware, uint64_t max_camera, uint64_t max_alarm);

typedef enum _MANSCDP_result_type
{
    MANSCDP_UNKNOWN_RESULT_TYPE,
    MANSCDP_OK,
    MANSCDP_ERROR
}MANSCDP_result_type;

typedef enum _MANSCDP_on_off_line
{
    MANSCDP_UNKNOWN_ON_OFF_LINE,
    MANSCDP_ONLINE,
    MANSCDP_OFFLINE
}MANSCDP_on_off_line;

typedef void(*function_query_device_status_callback)(char* device_ID, MANSCDP_on_off_line online, MANSCDP_result_type status);

typedef struct _MANSCDP_device
{
    char* DeviceID;
    char* Name;
    char* Manufacturer;
    char* Model;
    char* Owner;
    char* CivilCode;
    char* Address;
    char* Parental;
    char* SafetyWay;
    char* RegisterWay;
    char* Secrecy;
    char* Status;
}MANSCDP_device;

typedef void(*function_query_catalog_callback)(char* device_ID, uint64_t sum_num, MANSCDP_device* p_MANSCDP_device_array);

#endif // !_CALLBACK_DEFINES_H_
