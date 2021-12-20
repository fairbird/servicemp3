from Plugins.Plugin import PluginDescriptor


def autostart(reason, **kwargs):
	from Plugins.SystemPlugins.ServiceMP3 import servicemp3


def Plugins(**kwargs):
	return [
		PluginDescriptor(where=PluginDescriptor.WHERE_AUTOSTART, needsRestart=True, fnc=autostart)
	]
