// QL.cpp : 实现文件
//

#include "stdafx.h"
#include "PFCT.h"
#include "QL.h"
#include "afxdialogex.h"


// CQL 对话框

IMPLEMENT_DYNAMIC(CQL, CDialogEx)

CQL::CQL(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_QL, pParent)
	
{

}

CQL::~CQL()
{
}

void CQL::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CQL, CDialogEx)
END_MESSAGE_MAP()


// CQL 消息处理程序
