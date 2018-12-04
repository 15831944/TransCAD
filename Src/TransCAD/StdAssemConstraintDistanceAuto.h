// StdAssemConstraintDistanceAuto.h : CStdAssemConstraintDistanceAuto�� �����Դϴ�.

#pragma once
#include "resource.h"       // �� ��ȣ�Դϴ�.
#include "TransCAD.h"
#include ".\DispatchImplEx.h"
#include ".\StdAssemConstraintImpl.h"

typedef IDispatchImplEx<IStdAssemConstraintDistance, &IID_IStdAssemConstraintDistance, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0> IStdAssemConstraintDistanceType;

//#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
//#error "���� ������ COM ��ü�� ��ü DCOM ������ �������� �ʴ� Windows Mobile �÷����� ���� Windows CE �÷������� ����� �������� �ʽ��ϴ�. ATL�� ���� ������ COM ��ü�� ������ �����ϰ� ���� ������ COM ��ü ������ ����� �� �ֵ��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA�� �����Ͻʽÿ�. rgs ������ ������ ���� DCOM Windows CE�� �ƴ� �÷������� �����Ǵ� ������ ������ ���̹Ƿ� 'Free'�� �����Ǿ� �ֽ��ϴ�."
//#endif
//
//using namespace ATL;


// CStdAssemConstraintDistanceAuto

class ATL_NO_VTABLE CStdAssemConstraintDistanceAuto :
	public CComObjectRootEx<CComSingleThreadModel>,
	//public CComCoClass<CStdAssemConstraintDistanceAuto, &CLSID_StdAssemConstraintDistance>,
	//public IDispatchImpl<IStdAssemConstraintDistance, &IID_IStdAssemConstraintDistance, &LIBID_TransCAD, /*wMajor =*/ 1, /*wMinor =*/ 0>
	public IStdAssemConstraintImpl<IStdAssemConstraintDistanceType>
{
public:
	CStdAssemConstraintDistanceAuto()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_STDASSEMCONSTRAINTDISTANCE)


BEGIN_COM_MAP(CStdAssemConstraintDistanceAuto)
	COM_INTERFACE_ENTRY(IStdAssemConstraintDistance)
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
		ReleaseDispatchImplEx();
	}

public:
	STDMETHOD(get_ConstrainedPart)( IPart** ppVal);
	STDMETHOD(get_ConstrainedGeometry)( IReference** ppVal );
	STDMETHOD(get_ReferencePart)( IPart** ppVal );
	STDMETHOD(get_ReferenceGeometry)( IReference** ppVal );
};

//OBJECT_ENTRY_AUTO(__uuidof(StdAssemConstraintDistance), CStdAssemConstraintDistanceAuto)
