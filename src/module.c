#include "module.h"
#include "event.h"
#include "reply.h"
#include "command.h"
#include "batch.h"

void Module_init()
{
	event_init();
}

void Module_free()
{
	//release the freelists
	Reply_free_final();
	Command_free_final();
	Batch_free_final();
}
