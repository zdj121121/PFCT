// GL.cpp : 实现文件
//

#include "stdafx.h"
#include "PFCT.h"
#include "GL.h"
#include "afxdialogex.h"


// CGL 对话框

IMPLEMENT_DYNAMIC(CGL, CDialogEx)

CGL::CGL(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_GL, pParent)
	
{

}

CGL::~CGL()
{
}

void CGL::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CGL, CDialogEx)
	
END_MESSAGE_MAP()


// CGL 消息处理程序


