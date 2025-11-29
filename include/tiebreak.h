#pragma once

#include <FreeRTOS.h>
#include <task.h>
#include "portmacro.h"

extern void* volatile pxCurrentTCB;

UBaseType_t uxTaskTieBreakerGet();
void vTaskTieBreakerSet(UBaseType_t value);
