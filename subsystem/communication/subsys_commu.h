#ifndef __SUBSYS_COMMU_H
#define __SUBSYS_COMMU_H
#include "lw_oopc.h"
#include "err_head.h"
#include "module_tcp.h"


CLASS( SubS_comm) 
{
	err_t (*init)(void *);
	err_t (*destory)(void *);
	
	//tcp 操作
	gprs_tcp_operate *tcp_opr;
	
	// todo:	后续添加短信操作
	
	
	
	//todo:	后继添加串口通讯操作接口
	
	
};





#endif

