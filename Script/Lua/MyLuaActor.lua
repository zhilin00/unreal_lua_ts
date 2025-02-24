local actor={}

-- override event from blueprint
function actor:ReceiveBeginPlay()
    print("lzl lua test actor:ReceiveBeginPlay")
end

-- override event from blueprint
function actor:ReceiveEndPlay(reason)
    print("actor:ReceiveEndPlay")
    self:Super()
end


function actor:Tick(dt)
    print("map2actor:Tick")

end

return Class(nil, nil, actor)