##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=AWui
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/zhengming/Documents/billyuan/workspace
ProjectPath            :=/home/zhengming/Documents/billyuan/workspace/AWui
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/AWui
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Zhengming Chen
Date                   :=07/07/22
CodeLitePath           :=/home/zhengming/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=/home/zhengming/Documents/billyuan/workspace/build-$(WorkspaceConfiguration)/bin
OutputFile             :=../build-$(WorkspaceConfiguration)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/app.cpp$(ObjectSuffix) $(IntermediateDirectory)/menu.cpp$(ObjectSuffix) $(IntermediateDirectory)/panel1.cpp$(ObjectSuffix) $(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/app.cpp$(ObjectSuffix): app.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Documents/billyuan/workspace/AWui/app.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/app.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/app.cpp$(PreprocessSuffix): app.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/app.cpp$(PreprocessSuffix) app.cpp

$(IntermediateDirectory)/menu.cpp$(ObjectSuffix): menu.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Documents/billyuan/workspace/AWui/menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menu.cpp$(PreprocessSuffix): menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menu.cpp$(PreprocessSuffix) menu.cpp

$(IntermediateDirectory)/panel1.cpp$(ObjectSuffix): panel1.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Documents/billyuan/workspace/AWui/panel1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/panel1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/panel1.cpp$(PreprocessSuffix): panel1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/panel1.cpp$(PreprocessSuffix) panel1.cpp

$(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix): menuPanel.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Documents/billyuan/workspace/AWui/menuPanel.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menuPanel.cpp$(PreprocessSuffix): menuPanel.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menuPanel.cpp$(PreprocessSuffix) menuPanel.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


