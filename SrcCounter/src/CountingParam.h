/**
 * @file CountingParam.h
 * @brief CountingParam.h: interface for the CountingParam class.
 * @author Boom( boomworks@gmail.com )
 * @author Copyright(C) 2004-2005 boomworks.org , All right reserved.
 * @date 2005-11-23
 * $Revision: $
 */

#if !defined(AFX_STATISTICCONDITION_H__06A1F691_7E19_4E86_81F7_CA3F8C6CB4B5__INCLUDED_)
#define AFX_STATISTICCONDITION_H__06A1F691_7E19_4E86_81F7_CA3F8C6CB4B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

/**
 * @class SettingParam
 * More setting pramaeter for Counting.
 *
 * @author Boom( boomworks@gmail.com )
 */
class SettingParam
{
public:
    SettingParam();
    virtual ~SettingParam();

public:

	// Add UT and IT density param on 2009-3-3
	int m_nUtCaseDensity;		///< Unit Testing case density
	int m_nUtDefectDensity;		///< Unit Testing defect density
	int m_nItCaseDensity;		///< Intefration Testing case density
	int m_nItDefectDensity;		///< Integration Testing defect density

    int m_nLinesPerMM;      ///< Code production of one man-month
    int m_nDaysPerMM;       ///< Days per man-month
    int m_nCostPerMM;       ///< Cost per man-month

    ///////////////////////////////////////////////////////////////////

private:

};

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

/**
 * @class CountingParam
 * Counting parameter class.
 *
 * @author Boom( boomworks@gmail.com )
 */
class CountingParam
{
public:

	/**
	 * constructor.
	 */
	CountingParam();

	/**
	 * distructor.
	 */
	virtual ~CountingParam();

	///////////////////////////////////////////////////////////////////

    //
	// Counting parameter member list
	//

    wxArrayString       m_arrSrcFolderPath;         ///< Storing source folder path for counting
    wxArrayString       m_arrSrcType;               ///< Storing source type for counting

	bool				m_bRecursiveCounting;		///< Recursive folder counting flag

	SettingParam        m_settingParam;             ///< More setting parameter for counting

};

#endif // !defined(AFX_STATISTICCONDITION_H__06A1F691_7E19_4E86_81F7_CA3F8C6CB4B5__INCLUDED_)
