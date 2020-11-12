//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRMissionUIServiceData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::MissionUIServiceData>, std::__1::shared_ptr<core::MissionUIServiceData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setRunActionMapId:(id)arg1 version:(id)arg2;
- (void)setRunActionCommandType:(long long)arg1;
- (int)getMissionId;
- (long long)getResolvedCleanButtonStatus;
- (short)getBatteryLevelPercentage;
- (_Bool)getIsMowingRobotTrained;
- (_Bool)getIsMowingLidOpen;
- (long long)getKeyState;
- (int)getTankLevel;
- (id)getDockState;
- (_Bool)getIsStatusConnectionRelated;
- (id)getLogStreamData;
- (_Bool)getIsLogStreamEnabled;
- (long long)getEvacDockMode;
- (id)getEvacDockStatusMessageDescriptor;
- (id)getEvacHelpContentId;
- (id)getStateChangelist;
- (void)setMissionStatusAction:(long long)arg1;
- (long long)getMissionStatusAction;
- (_Bool)getIsTraining;
- (id)getHelpContentUrl;
- (id)getHelpContentId;
- (id)getStatusMessageArgs;
- (id)getStatusMessage;
- (id)getPauseDescriptionExtra;
- (_Bool)isPauseDescriptionExtraRequired;
- (int)getPauseDescriptionTime;
- (id)getPauseDescription;
- (_Bool)getIsAudioPlaying;
- (_Bool)getIsTankLow;
- (_Bool)getIsBinfull;
- (_Bool)getIsFullyCharged;
- (_Bool)getIsCharging;
- (_Bool)isPaused;
- (_Bool)getIsCleaning;
- (id)getCurrentLocationName;
- (long long)getRobotReadinessState;
- (short)getRobotErrorCode;
- (int)getMissionDuration;
- (long long)getResolvedDetailedMissionStatus;
- (long long)getResolvedMissionStatus;
- (const shared_ptr_184bb53b *)cppRef;
- (id)initWithCpp:(const shared_ptr_184bb53b *)arg1;

@end
