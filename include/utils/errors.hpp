#ifndef ERRORS_H
#define ERRORS_H

typedef enum ERROR_CODE
{
    SUCCESS = 0,
    
    PARSING_ERROR = 100,
    PARSING_ERROR_CAMERA_TYPE_INVALID = 101,
    PARSING_ERROR_CAMERA_ID_MISSING = 102,
    PARSING_ERROR_NUM_IMAGES_INVALID = 103,

    CAPTURE_ERROR = 200,
    CAPTURE_ERROR_NO_CAMERAS = 201,
    CAPTURE_ERROR_CAMERA_NOT_FOUND = 202,

    MESSAGE_QUEUE_ERROR = 300,
    MESSAGE_QUEUE_ERROR_MEMORY_SPACE_FAILURE = 301,
    MESSAGE_QUEUE_ERROR_INSERT_DATA_FAILURE = 302
} ERROR_CODE;

#endif