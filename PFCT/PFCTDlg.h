
// PFCTDlg.h : 头文件
//

#pragma once
#include "QL.h"
#include "CZ.h"
#include "GL.h"
#include "TJ.h"
#include "afxcmn.h"


// CPFCTDlg 对话框
class CPFCTDlg : public CDialogEx
{
// 构造
public:
	CPFCTDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PFCT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	CQL m_QL;
	CCZ m_CZ;
	CGL m_GL;
	CTJ m_TJ;
	CRect rect;
public:
	CTabCtrl m_tab;
	afx_msg void OnTcnSelchangeTab(NMHDR *pNMHDR, LRESULT *pResult);
};
