#pragma once
#include "../Core/VoltaCore.h"

namespace Volta {

	enum class EventType
	{

	};

	class VOLTA_API Event
	{
	public:
		EventType m_Type;
		EventHandler m_handleEvent;

	};

}
