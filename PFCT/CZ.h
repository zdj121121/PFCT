#pragma once


// CCZ �Ի���

class CCZ : public CDialogEx
{
	DECLARE_DYNAMIC(CCZ)

public:
	CCZ(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCZ();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CZ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
//	int m_CZ;
	afx_msg void OnCbnSelchangeCombo3();
};
