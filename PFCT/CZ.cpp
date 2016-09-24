// CZ.cpp : 实现文件
//

#include "stdafx.h"
#include "PFCT.h"
#include "CZ.h"
#include "afxdialogex.h"


// CCZ 对话框

IMPLEMENT_DYNAMIC(CCZ, CDialogEx)

CCZ::CCZ(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CZ, pParent)
	
{

}

CCZ::~CCZ()
{
}

void CCZ::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCZ, CDialogEx)

END_MESSAGE_MAP()


// CCZ 消息处理程序


