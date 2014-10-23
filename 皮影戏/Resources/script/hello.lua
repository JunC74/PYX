
-- for CCLuaEngine traceback
function __G__TRACKBACK__(msg)
    print("----------------------------------------")
    print("LUA ERROR: " .. tostring(msg) .. "\n")
    print(debug.traceback())
    print("----------------------------------------")
end

function Print( ... )
	if #... == 0 then
		return
	end
	print(string.format(...))
end

log = Log:GetInstance()

require "pyx"
require "conf"
-- require "test"

function RAMCollect()
	collectgarbage("collect")
	local c3 = collectgarbage("count")
	Print("Lua 内存大小: %f", c3)
end

function main()
	-- avoid memory leak
    collectgarbage("setpause", 100)
    collectgarbage("setstepmul", 5000)
    Schedule:GetInstance():RegisterScriptFunc(RAMCollect, 10, false)
	GameStart()
	-- Test()
	collectgarbage("collect")
	
end
xpcall(main, __G__TRACKBACK__)
