/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		SakuraScrollBar.h
* @brief	This File is SakuraGUI DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-11-28	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __SAKURASCROLLBAR_H_
#define __SAKURASCROLLBAR_H_

//Include SakuraGUI Common Header File
#include "SakuraUICommon.h"
#include "SakuraControl.h"

//Macro Definition
#ifdef	SAKURAGUI_EXPORTS
#define SAKURASCROLLBAR_API	__declspec(dllexport)
#else
#define SAKURASCROLLBAR_API	__declspec(dllimport)
#endif

#define	SAKURASCROLLBAR_CALLMETHOD	__stdcall

//Class Definition
class SAKURASCROLLBAR_API CSakuraScrollBar : public CSakuraControl
{
public:
	CSakuraScrollBar();
	~CSakuraScrollBar();

private:

};


#endif // !__SAKURASCROLLBAR_H_

