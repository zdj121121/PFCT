#pragma once


// CGL 对话框

class CGL : public CDialogEx
{
	DECLARE_DYNAMIC(CGL)

public:
	CGL(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CGL();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_GL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	int m_GL;
	afx_msg void OnBnClickedRadio8();
};
