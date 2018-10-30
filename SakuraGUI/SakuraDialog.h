/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		SakuraDialog.h
* @brief	This File is SakuraGUI DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-10-16	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __SAKURADIALOG_H_
#define __SAKURADIALOG_H_

//Include SakuraGUI Common Header File
#include "SakuraUICommon.h"

//Macro Definition
#ifdef	SAKURAGUI_EXPORTS
#define SAKURADIALOG_API	__declspec(dllexport)
#else
#define SAKURADIALOG_API	__declspec(dllimport)
#endif

#define	SAKURADIALOG_CALLMODE	__stdcall

//Class Definition
class SAKURADIALOG_API CSakuraDialog
{
public:
	CSakuraDialog();
	~CSakuraDialog();

private:

};


#endif // !__SAKURADIALOG_H_

