#pragma once
#include "stdafx.h"


void HookQrCode(DWORD dwHookOffset);	//HOOK��ά��
void UnHookQrCode(DWORD dwHookOffset);	//ж��HOOK
void ShowPic();		//��ʾ��ά��
void SaveImg(DWORD qrcode);	//�����ά��
void GotoQrCode(); //��ת����ά��

