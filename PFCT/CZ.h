#pragma once


// CCZ 对话框

class CCZ : public CDialogEx
{
	DECLARE_DYNAMIC(CCZ)

public:
	CCZ(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCZ();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CZ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	int m_CZ;
	afx_msg void OnCbnSelchangeCombo3();
};
