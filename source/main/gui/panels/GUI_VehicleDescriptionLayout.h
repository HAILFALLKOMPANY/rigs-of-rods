#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR
{

namespace GUI
{
	
ATTRIBUTE_CLASS_LAYOUT(VehicleDescriptionLayout, "VehicleDesc.layout");
class VehicleDescriptionLayout : public wraps::BaseLayout
{

public:

	VehicleDescriptionLayout(MyGUI::Widget* _parent = nullptr);
	virtual ~VehicleDescriptionLayout();

protected:

	//%LE Widget_Declaration list start
	ATTRIBUTE_FIELD_WIDGET_NAME(VehicleDescriptionLayout, m_vehicle_title, "vehicle_title");
	MyGUI::EditBox* m_vehicle_title;

	ATTRIBUTE_FIELD_WIDGET_NAME(VehicleDescriptionLayout, m_vehicle_desc, "vehicle_desc");
	MyGUI::EditBox* m_vehicle_desc;

	//%LE Widget_Declaration list end
};

} // namespace GUI

} // namespace RoR
