
// PFCTDlg.h : ͷ�ļ�
//

#pragma once
#include "QL.h"
#include "CZ.h"
#include "GL.h"
#include "TJ.h"
#include "afxcmn.h"


// CPFCTDlg �Ի���
class CPFCTDlg : public CDialogEx
{
// ����
public:
	CPFCTDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PFCT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
