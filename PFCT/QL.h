#pragma once


// CQL �Ի���

class CQL : public CDialogEx
{
	DECLARE_DYNAMIC(CQL)

public:
	CQL(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CQL();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_QL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
//	int m_QL;
};
