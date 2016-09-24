#pragma once


// CTJ 对话框

class CTJ : public CDialogEx
{
	DECLARE_DYNAMIC(CTJ)

public:
	CTJ(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTJ();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TJ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	int m_TJ;
	afx_msg void OnEnChangeEdit3();
};
