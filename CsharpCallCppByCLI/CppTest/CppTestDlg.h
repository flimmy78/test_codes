// CppTestDlg.h : header file
//

#pragma once
#include "afxwin.h"

enum Operation
{
	Add,
	Multiply,
	Factorial,
	None
};

// CCppTestDlg dialog
class CCppTestDlg : public CDialog
{
// Construction
public:
	CCppTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CPPTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	Operation m_op;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	CEdit m_EditX;
	CEdit m_EditY;
	CEdit m_EditSum;
};
