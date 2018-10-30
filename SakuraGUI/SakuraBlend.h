/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		SakuraBlend.h
* @brief	This File is SakuraGUI DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-10-16	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __SAKURABLEND_H_
#define __SAKURABLEND_H_

//Include SakuraGUI Common Header File
#include "SakuraUICommon.h"

//Macro Definition
#ifdef	SAKURAGUI_EXPORTS
#define SAKURABLEND_API	__declspec(dllexport)
#else
#define SAKURABLEND_API	__declspec(dllimport)
#endif

#define	SAKURABLEND_CALLMODE	__stdcall

//Class Definition
class SAKURABLEND_API CSakuraBlendFont
{
protected:
	LPDIRECT3DDEVICE9	m_pD3D9Device;					// CSakuraBlendFont D3D9��Ⱦ�豸

public:
	DirectFont* m_States[MAX_CONTROL_STATES];			// CSakuraBlendFont �����ؼ�״̬����
	DirectFont* m_Current;								// CSakuraBlendFont ��ǰ�ؼ�״̬����

public:
	CSakuraBlendFont();									// CSakuraBlendFont ���캯��
	~CSakuraBlendFont();								// CSakuraBlendFont ��������

	CSakuraBlendFont(LPDIRECT3DDEVICE9 pD3D9Device);	// CSakuraBlendFont ���캯��(����+1)

	LPDIRECT3DDEVICE9	SAKURABLEND_CALLMODE	GetDevice() const;													// CSakuraBlendFont ��ȡD3D9�豸ָ��
	DirectFont*			SAKURABLEND_CALLMODE	GetCurrent() const;													// CSakuraBlendFont ��ȡ�ؼ�״̬����

	void	SAKURABLEND_CALLMODE	OnCreate(LPDIRECT3DDEVICE9 pD3D9Device);										// CSakuraBlendFont ��ʼ��
	int		SAKURABLEND_CALLMODE	AddFont(SAKURA_CONTROL_STATE eType, LPWSTR strFontName, int nFontSize);			// CSakuraBlendFont �������(�������ơ������С)
	void	SAKURABLEND_CALLMODE	Blend(SAKURA_CONTROL_STATE eType, LPCWSTR pString, LPRECT pRect, DWORD Format = DT_CENTER | DT_VCENTER, D3DCOLOR Color = D3DCOLOR_ARGB(255, 255, 255, 255));			// CSakuraBlendFont ��Ⱦ����

};

class SAKURABLEND_API CSakuraBlendTexture
{
protected:
	LPDIRECT3DDEVICE9	m_pD3D9Device;					// CSakuraBlendTexture D3D9��Ⱦ�豸

public:
	CCerasusUnit* m_States[MAX_CONTROL_STATES];			// CSakuraBlendTexture �����ؼ�״̬����
	CCerasusUnit* m_Current;							// CSakuraBlendTexture ��ǰ�ؼ�״̬����

public:
	CSakuraBlendTexture();								// CSakuraBlendTexture ���캯��
	~CSakuraBlendTexture();								// CSakuraBlendTexture ��������

	CSakuraBlendTexture(LPDIRECT3DDEVICE9 pD3D9Device);	// CSakuraBlendTexture ���캯��

	LPDIRECT3DDEVICE9	SAKURABLEND_CALLMODE	GetDevice() const;													// CSakuraBlendTexture ��ȡD3D9�豸ָ��
	CCerasusUnit*		SAKURABLEND_CALLMODE	GetCurrent() const;													// CSakuraBlendTexture ��ȡ�ؼ�״̬����

	void	SAKURABLEND_CALLMODE	OnCreate(LPDIRECT3DDEVICE9 pD3D9Device);										// CSakuraBlendTexture ��ʼ��
	int		SAKURABLEND_CALLMODE	AddTexture(SAKURA_CONTROL_STATE eType, CUUint sUnit);							// CSakuraBlendTexture �������(�ļ�����)
	int		SAKURABLEND_CALLMODE	AddTexture(SAKURA_CONTROL_STATE eType, CUUintEx sUnit);							// CSakuraBlendTexture �������(�ڴ浼��)
	void	SAKURABLEND_CALLMODE	Blend(SAKURA_CONTROL_STATE eType);												// CSakuraBlendTexture ��Ⱦ����

};



#endif // !__SAKURABLEND_H_
