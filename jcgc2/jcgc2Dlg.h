
// jcgc2Dlg.h : 头文件
//

#pragma once
#include "opencv2/opencv.hpp"
#include "d:\opencv3\opencv\build\include\opencv2\core\mat.hpp"
using namespace cv;


// Cjcgc2Dlg 对话框
class Cjcgc2Dlg : public CDialogEx
{
// 构造
public:
	Cjcgc2Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_JCGC2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
