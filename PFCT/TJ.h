#pragma once


// CTJ �Ի���

class CTJ : public CDialogEx
{
	DECLARE_DYNAMIC(CTJ)

public:
	CTJ(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTJ();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TJ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
//	int m_TJ;
	afx_msg void OnEnChangeEdit3();
};
