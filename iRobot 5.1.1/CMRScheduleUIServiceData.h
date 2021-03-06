//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRScheduleUIServiceData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::ScheduleUIServiceData>, std::__1::shared_ptr<core::ScheduleUIServiceData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)getLastError;
- (id)getInternalMappingScheduleList;
- (_Bool)getShowScheduleProgress;
- (_Bool)getCheckIfSchedulesContainsMapId;
- (void)setMapId:(id)arg1;
- (id)getScheduleMultipleMappingData;
- (void)setScheduleMultipleMappingData:(id)arg1;
- (_Bool)doesScheduleSupportMissionPresets;
- (_Bool)isScheduleWithMapsEnabled;
- (_Bool)doesScheduleSupportMissionParameters;
- (_Bool)isScheduleMapsCapable;
- (void)setSimpleScheduleMap:(id)arg1;
- (id)getSimpleScheduleMap;
- (id)getMappingScheduleList;
- (int)getScheduleItemIndex;
- (void)setScheduleItemIndex:(int)arg1;
- (id)getTimeoutTag;
- (void)setMappingScheduleItemSwitchEnabled:(_Bool)arg1;
- (id)getStateChangelist;
- (const shared_ptr_b1fadcdf *)cppRef;
- (id)initWithCpp:(const shared_ptr_b1fadcdf *)arg1;

@end

