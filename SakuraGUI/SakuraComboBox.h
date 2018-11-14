/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		SakuraComboBox.h
* @brief	This File is SakuraGUI DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-11-14	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __SAKURACOMBOBOX_H_
#define __SAKURACOMBOBOX_H_

//Include SakuraGUI Common Header File
#include "SakuraUICommon.h"
#include "SakuraButton.h"

//Macro Definition
#ifdef	SAKURAGUI_EXPORTS
#define SAKURACOMBOBOX_API	__declspec(dllexport)
#else
#define SAKURACOMBOBOX_API	__declspec(dllimport)
#endif

#define	SAKURACOMBOBOX_CALLMETHOD	__stdcall

//Class Definition
class SAKURACOMBOBOX_API CSakuraComboBox : public CSakuraButton
{
public:
	CSakuraComboBox();
	~CSakuraComboBox();

};

#endif // !__SAKURACOMBOBOX_H_

