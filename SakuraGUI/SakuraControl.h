/*
*     COPYRIGHT NOTICE
*     Copyright(c) 2018, Team Shanghai Dream Equinox
*     All rights reserved.
*
* @file		SakuraControl.h
* @brief	This File is SakuraGUI DLL Project.
* @author	Alopex/Helium
* @version	v1.00a
* @date		2018-10-16	v1.00a	alopex	Create Project.
*/
#pragma once

#ifndef __SAKURACONTROL_H_
#define __SAKURACONTROL_H_

//Include SakuraGUI Common Header File
#include "SakuraUICommon.h"

//Macro Definition
#ifdef	SAKURAGUI_EXPORTS
#define SAKURACONTROL_API	__declspec(dllexport)
#else
#define SAKURACONTROL_API	__declspec(dllimport)
#endif

#define	SAKURACONTROL_CALLMODE	__stdcall

//Class Definition
class SAKURACONTROL_API CSakuraControl
{
/*public:
	int m_nX;					// CSakuraControl �ؼ�X����
	int m_nY;					// CSakuraControl �ؼ�Y����
	int m_nWidth;				// CSakuraControl �ؼ����
	int m_nHeight;				// CSakuraControl �ؼ��߶�

	bool m_bVisible;			// CSakuraControl �ؼ��Ƿ�ɼ�(true:��ʾ/false:����)
	bool m_bMouseOver;			// CSakuraControl ���ָ���ڿؼ���(true:��/false:��)
	bool m_bHasFocus;			// CSakuraControl �ؼ��Ƿ�ӵ�����뽹��(true:��/false:��)
	bool m_bIsDefault;			// CSakuraControl �ؼ��Ƿ���Ĭ�Ͽؼ�(true:��/false:��)

	CSakuraDialog* m_pDialog;	// CSakuraControl ���ڿؼ�����
	UINT m_nIndex;              // CSakuraControl �ؼ��б��пؼ�����

	//vector<DirectFont*>		m_vecFontCaches;		// CSakuraControl �ؼ�������Ⱦ
	//vector<CCerasusUnit*>	m_vecTextureCaches;			// CSakuraControl �ؼ�������Ⱦ

protected:
	int m_nID;						// CSakuraControl �ؼ����
	SAKURA_CONTROL_TYPE m_eType;	// CSakuraControl �ؼ�����

	UINT m_nHotkey;					// CSakuraControl ���ⰴ������
	LPVOID m_pUserData;				// CSakuraControl �û����ݵ�ַ

	bool m_bEnabled;				// CSakuraControl �ؼ��Ƿ�ʹ��(true:��/false:��)
	RECT m_rcBoundingBox;			// CSakuraControl �ؼ�ʹ������

protected:
	virtual void	SAKURACONTROL_CALLMODE UpdateRects();				// CSakuraControl ���¿ؼ�����

public:
	CSakuraControl(CSakuraDialog* pDialog = NULL);						// CSakuraControl ���캯��
	virtual ~CSakuraControl();											// CSakuraControl ��������

	virtual HRESULT SAKURACONTROL_CALLMODE OnInit();					// CSakuraControl ��ʼ���ؼ�
	virtual void	SAKURACONTROL_CALLMODE Refresh();					// CSakuraControl ˢ�¿ؼ�
	virtual void	SAKURACONTROL_CALLMODE Render(float fElapsedTime);	// CSakuraControl ��Ⱦ�ؼ�

	virtual bool	SAKURACONTROL_CALLMODE MsgProc(UINT uMsg, WPARAM wParam, LPARAM lParam);					// CSakuraControl ��Ϣ����
	virtual bool	SAKURACONTROL_CALLMODE HandleKeyboard(UINT uMsg, WPARAM wParam, LPARAM lParam);				// CSakuraControl ������Ϣ����
	virtual bool	SAKURACONTROL_CALLMODE HandleMouse(UINT uMsg, POINT pt, WPARAM wParam, LPARAM lParam);		// CSakuraControl �����Ϣ����

	virtual bool	SAKURACONTROL_CALLMODE	CanHaveFocus();				// CSakuraControl �Ƿ�ӵ�н���
	virtual void	SAKURACONTROL_CALLMODE	OnFocusIn();				// CSakuraControl ���ý���
	virtual void	SAKURACONTROL_CALLMODE	OnFocusOut();				// CSakuraControl ��ʧ����
	virtual void	SAKURACONTROL_CALLMODE	OnMouseEnter();				// CSakuraControl ������
	virtual void	SAKURACONTROL_CALLMODE OnMouseLeave();				// CSakuraControl ����뿪
	virtual void	SAKURACONTROL_CALLMODE OnHotkey();					// CSakuraControl ����ȼ�
	virtual BOOL	SAKURACONTROL_CALLMODE ContainsPoint(POINT pt);		// CSakuraControl ������ڿؼ���
	virtual void	SAKURACONTROL_CALLMODE SetEnabled(bool bEnabled);	// CSakuraControl ���ÿؼ�ʹ��
	virtual bool	SAKURACONTROL_CALLMODE GetEnabled();				// CSakuraControl ��ȡ�ؼ�ʹ��
	virtual void	SAKURACONTROL_CALLMODE SetVisible(bool bVisible);	// CSakuraControl ���ÿؼ��ɼ�
	virtual bool	SAKURACONTROL_CALLMODE GetVisible();				// CSakuraControl ��ȡ�ؼ��ɼ�
	UINT			SAKURACONTROL_CALLMODE GetType() const;				// CSakuraControl ��ȡ�ؼ�����
	int				SAKURACONTROL_CALLMODE GetID() const;				// CSakuraControl ��ȡ�ؼ�ID
	void			SAKURACONTROL_CALLMODE SetID(int nID);				// CSakuraControl ���ÿؼ�ID
	void			SAKURACONTROL_CALLMODE SetLocation(int x, int y);	// CSakuraControl ���ÿؼ�����
	void			SAKURACONTROL_CALLMODE SetSize(int width, int height);			// CSakuraControl ���ÿؼ���״
	void			SAKURACONTROL_CALLMODE SetHotkey(UINT nHotkey);		// CSakuraControl ���������ֵ
	UINT			SAKURACONTROL_CALLMODE GetHotkey();					// CSakuraControl ��ȡ�����ֵ
	void			SAKURACONTROL_CALLMODE SetUserData(void* pUserData);			// CSakuraControl �����û�����
	void*			SAKURACONTROL_CALLMODE GetUserData();				// CSakuraControl ��ȡ�û�����
	virtual void    SAKURACONTROL_CALLMODE SetTextColor(D3DCOLOR Color);			// CSakuraControl �����ı���ɫ*/

};


#endif // !__SAKURACONTROL_H_

