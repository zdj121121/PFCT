#pragma once


// CGL �Ի���

class CGL : public CDialogEx
{
	DECLARE_DYNAMIC(CGL)

public:
	CGL(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CGL();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_GL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
//	int m_GL;
	afx_msg void OnBnClickedRadio8();
};
