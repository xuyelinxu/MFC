#if !defined(AFX_CONTOURLEVELS_H__66959414_5558_4B05_BD73_4BBC32ED48E7__INCLUDED_)
#define AFX_CONTOURLEVELS_H__66959414_5558_4B05_BD73_4BBC32ED48E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CContourLevel;

/////////////////////////////////////////////////////////////////////////////
// CContourLevels wrapper class

class CContourLevels : public COleDispatchDriver
{
public:
	CContourLevels() {}		// Calls COleDispatchDriver default constructor
	CContourLevels(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CContourLevels(const CContourLevels& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CContourLevel GetItems(long Index);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTOURLEVELS_H__66959414_5558_4B05_BD73_4BBC32ED48E7__INCLUDED_)
