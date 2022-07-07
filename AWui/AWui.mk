##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=AWui
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/zhengming/Downloads/AWui
ProjectPath            :=/home/zhengming/Downloads/AWui/AWui
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/AWui
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Zhengming Chen
Date                   :=07/07/22
CodeLitePath           :=/home/zhengming/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=/home/zhengming/Downloads/AWui/build-$(WorkspaceConfiguration)/bin
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/panel1.cpp$(ObjectSuffix) $(IntermediateDirectory)/processProdutionPanel.cpp$(ObjectSuffix) $(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix) $(IntermediateDirectory)/menu.cpp$(ObjectSuffix) $(IntermediateDirectory)/app.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/panel1.cpp$(ObjectSuffix): panel1.cpp $(IntermediateDirectory)/panel1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Downloads/AWui/AWui/panel1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/panel1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/panel1.cpp$(DependSuffix): panel1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/panel1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/panel1.cpp$(DependSuffix) -MM panel1.cpp

$(IntermediateDirectory)/panel1.cpp$(PreprocessSuffix): panel1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/panel1.cpp$(PreprocessSuffix) panel1.cpp

$(IntermediateDirectory)/processProdutionPanel.cpp$(ObjectSuffix): processProdutionPanel.cpp $(IntermediateDirectory)/processProdutionPanel.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Downloads/AWui/AWui/processProdutionPanel.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/processProdutionPanel.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/processProdutionPanel.cpp$(DependSuffix): processProdutionPanel.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/processProdutionPanel.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/processProdutionPanel.cpp$(DependSuffix) -MM processProdutionPanel.cpp

$(IntermediateDirectory)/processProdutionPanel.cpp$(PreprocessSuffix): processProdutionPanel.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/processProdutionPanel.cpp$(PreprocessSuffix) processProdutionPanel.cpp

$(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix): menuPanel.cpp $(IntermediateDirectory)/menuPanel.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Downloads/AWui/AWui/menuPanel.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menuPanel.cpp$(DependSuffix): menuPanel.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/menuPanel.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/menuPanel.cpp$(DependSuffix) -MM menuPanel.cpp

$(IntermediateDirectory)/menuPanel.cpp$(PreprocessSuffix): menuPanel.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menuPanel.cpp$(PreprocessSuffix) menuPanel.cpp

$(IntermediateDirectory)/menu.cpp$(ObjectSuffix): menu.cpp $(IntermediateDirectory)/menu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Downloads/AWui/AWui/menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/menu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/menu.cpp$(DependSuffix): menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/menu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/menu.cpp$(DependSuffix) -MM menu.cpp

$(IntermediateDirectory)/menu.cpp$(PreprocessSuffix): menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/menu.cpp$(PreprocessSuffix) menu.cpp

$(IntermediateDirectory)/app.cpp$(ObjectSuffix): app.cpp $(IntermediateDirectory)/app.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/zhengming/Downloads/AWui/AWui/app.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/app.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/app.cpp$(DependSuffix): app.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/app.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/app.cpp$(DependSuffix) -MM app.cpp

$(IntermediateDirectory)/app.cpp$(PreprocessSuffix): app.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/app.cpp$(PreprocessSuffix) app.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


