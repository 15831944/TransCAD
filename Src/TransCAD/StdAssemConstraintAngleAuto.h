// StdAssemConstraintAngleAuto.h : CStdAssemConstraintAngleAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.
#include "TransCAD.h"
#include ".\DispatchImplEx.h"
#include ".\StdAssemConstraintImpl.h"

typedef IDispatchImplEx<IStdAssemConstraintAngle, &IID_IStdAssemConstraintAngle, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdAssemConstraintAngleType;


//#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
//#error "���� ������ COM ��ü�� ��ü DCOM ������ �������� �ʴ� Windows Mobile �÷����� ���� Windows CE �÷������� ����� �������� �ʽ��ϴ�. ATL�� ���� ������ COM ��ü�� ������ �����ϰ� ���� ������ COM ��ü ������ ����� �� �ֵ��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA�� �����Ͻʽÿ�. rgs ������ ������ ���� DCOM Windows CE�� �ƴ� �÷������� �����Ǵ� ������ ������ ���̹Ƿ� 'Free'�� �����Ǿ� �ֽ��ϴ�."
//#endif
//
//using namespace ATL;


// CStdAssemConstraintAngleAuto

class ATL_NO_VTABLE CStdAssemConstraintAngleAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	//public CComCoClass<CStdAssemConstraintAngleAuto, &CLSID_StdAssemConstraintAngle>,
	//public IDispatchImpl<IStdAssemConstraintAngle, &IID_IStdAssemConstraintAngle, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
	public IStdAssemConstraintImpl<IStdAssemConstraintAngleType>
{
public:
	CStdAssemConstraintAngleAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDASSEMCONSTRAINTANGLE)


BEGIN_COM_MAP(CStdAssemConstraintAngleAuto)
	COM_INTERFACE_ENTRY(IStdAssemConstraintAngle)
	COM_INTERFACE_ENTRY(IStdAssemConstraint)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD(get_ConstrainedPart)( IPart** ppVal);
	STDMETHOD(get_ConstrainedGeometry)( IReference** ppVal );
	STDMETHOD(get_ReferencePart)( IPart** ppVal );
	STDMETHOD(get_ReferenceGeometry)( IReference** ppVal );
};

//OBJECT_ENTRY_AUTO(__uuidof(StdAssemConstraintAngle), CStdAssemConstraintAngleAuto)
