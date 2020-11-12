//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRHistoryUIServiceData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::HistoryUIServiceData>, std::__1::shared_ptr<core::HistoryUIServiceData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getFutureTimelineEvents;
- (id)getFinishedTimelineEvents;
- (id)getCurrentTimelineEvents;
- (id)getMapVersion;
- (id)getMapId;
- (long long)getMapDataFormat;
- (_Bool)doesMissionContainMap;
- (_Bool)isDockEvacuationDetailsAvailable;
- (id)getDockEvacuationLifeTimeData;
- (long long)getDockEvacuationTotalCount;
- (id)getMissionHistoryDetails:(int)arg1;
- (id)getMissionRuntimeChargeTimeColor;
- (id)getMissionRuntimePauseTimeColor;
- (id)getMissionRuntimeCleaningTimeColor;
- (id)getMissionRuntimeChartData;
- (id)getMissionsAreaCleanedChartData;
- (int)getMissionsAreaCleanedChartTotalMission;
- (id)getRobotMissionHistoryList;
- (int)getAccumulatedDirtDetectCount;
- (int)getAccumulatedTotalJobMinutes;
- (int)getAccumulatedNumberOfCleaningJobs;
- (int)getAccumulatedTotalSquareFeetCleaned;
- (void)setMissionId:(int)arg1;
- (int)getMissionId;
- (id)getStateChangelist;
- (const shared_ptr_905ffc14 *)cppRef;
- (id)initWithCpp:(const shared_ptr_905ffc14 *)arg1;

@end
