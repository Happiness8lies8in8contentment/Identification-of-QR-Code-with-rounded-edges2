
// jcgc2Dlg.h : ͷ�ļ�
//

#pragma once
#include "opencv2/opencv.hpp"
#include "d:\opencv3\opencv\build\include\opencv2\core\mat.hpp"
using namespace cv;


// Cjcgc2Dlg �Ի���
class Cjcgc2Dlg : public CDialogEx
{
// ����
public:
	Cjcgc2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_JCGC2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOpenimg();
	afx_msg void OnBnClickedBianhuan();
	afx_msg void OnBnClickedSaveimg();
	Mat m_srcImg,AfterImg;
	float n_DiameterL;
	float n_DiameterR;
	float m_cirWideL;
	float m_cirWideR;
	float n_length;
	void ShowImage(Mat& img, int nID);
	void ShoeImage(Mat& img,  int nID);
};
