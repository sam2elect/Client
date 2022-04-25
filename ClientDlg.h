
// ClientDlg.h : header file
//

#pragma once
#include "CClientSocket.h"


// CClientDlg dialog
class CClientDlg : public CDialogEx
{
// Construction
public:
	CClientDlg(CWnd* pParent = nullptr);	// standard constructor

	CClientSocket m_ClientSocket;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CLIENT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnconnect();
	afx_msg void OnBnClickedbtnsend();
	afx_msg void OnBnClickedbtnclose();
	CString m_strIPAddress;
	CString m_strMessage;
	UINT m_iPort;
};
