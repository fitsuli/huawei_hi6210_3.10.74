/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : OamSpecTaskDef.h
  版 本 号   : 初稿
  作    者   : zhuli 100318
  生成日期   : 2011年9月29日
  最近修改   :
  功能描述   : OM定义的特殊任务
  函数列表   :
  修改历史   :
  1.日    期   : 2012年3月1日
    作    者   : zhuli 100318
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"

#ifndef __OM_SPECTASK_DEF_H__
#define __OM_SPECTASK_DEF_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 SOCP的任务定义
*****************************************************************************/

/*SOCP的任务栈定义*/
#define     SOCP_ENCSRC_TASK_STACK_SIZE     (0x1000)
#define     SOCP_ENCDST_TASK_STACK_SIZE     (0x1000)
#define     SOCP_DECSRC_TASK_STACK_SIZE     (0x1000)
#define     SOCP_DECDST_TASK_STACK_SIZE     (0x1000)

/*****************************************************************************
  4 OM Printf 的任务定义
*****************************************************************************/

/* OM Printf 自处理任务堆栈 */
#define     OM_PRINTF_TASK_STACK_SIZE       (4096)

/*****************************************************************************
  4 PS Log 的任务定义
*****************************************************************************/

/* Log 自处理任务堆栈 */
#define     LOG_SELF_TASK_STACK_SIZE        (0x2000)

/*****************************************************************************
  5 OM RL 的任务定义
*****************************************************************************/


/*****************************************************************************
  6 OM Socket 的任务定义
*****************************************************************************/

#define     RL_SOCK_TASK_STACK_SIZE         (8096)


/* Add by h59254 for V8R1 OM begin */
/*****************************************************************************
  8 SCM RCV 的任务定义
*****************************************************************************/

#define     SCM_OM_CFG_TASK_STACK_SIZE      (8096)

#define     SCM_CBT_REQ_TASK_STACK_SIZE     (8096)
/* Add by h59254 for V8R1 OM end */

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
#if __cplusplus
    }
#endif
#endif

#endif /* end of __OM_SPECTASK_DEF_H__ */



