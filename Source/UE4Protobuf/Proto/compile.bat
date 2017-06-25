@echo off

..\..\ThirdParty\protobuf-3.3.0\bin\protoc.exe --proto_path=. --cpp_out=. Test.proto

pause