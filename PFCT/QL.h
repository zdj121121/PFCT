#pragma once


// CQL 对话框

class CQL : public CDialogEx
{
	DECLARE_DYNAMIC(CQL)

public:
	CQL(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CQL();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_QL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	int m_QL;
};
