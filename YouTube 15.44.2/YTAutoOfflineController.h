//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTOfflineVideoControllerObserver-Protocol.h>
#import <Module_Framework/YTOfflineVideoListControllerObserver-Protocol.h>

@class GIMMe, NSDate, NSString, YTAutoOfflineService, YTOfflineCoordinator, YTOfflineVideoController, YTOfflineVideoListController;

@interface YTAutoOfflineController : NSObject <YTOfflineVideoListControllerObserver, YTOfflineVideoControllerObserver>
{
    unsigned long long _videosToDeleteCount;
    unsigned long long _failedVideosCount;
    unsigned long long _usedOfflineStorageBytes;
    YTOfflineVideoListController *_offlineVideoListController;
    YTOfflineVideoController *_offlineVideoController;
    YTAutoOfflineService *_autoOfflineService;
    YTOfflineCoordinator *_offlineCoordinator;
    NSDate *_offlineStorageCheckTime;
    int _autoOfflineVideoListCheckType;
    int _offlineCandidateType;
    GIMMe *_gimme;
    NSString *_autoOfflineVideoListID;
    unsigned long long _totalVideos;
    unsigned long long _completedVideos;
    NSDate *_nextSyncDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *nextSyncDate; // @synthesize nextSyncDate=_nextSyncDate;
@property(readonly, nonatomic) unsigned long long completedVideos; // @synthesize completedVideos=_completedVideos;
@property(readonly, nonatomic) unsigned long long totalVideos; // @synthesize totalVideos=_totalVideos;
@property(readonly, nonatomic) NSString *autoOfflineVideoListID; // @synthesize autoOfflineVideoListID=_autoOfflineVideoListID;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (CDUnknownBlockType)innertubeResponseBlockFromCompletionHandler:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)refreshOfflineStorageBytes;
- (void)downloadDidCompleteWithVideoListID:(id)arg1;
- (void)downloadDidProgressWithVideoListID:(id)arg1 completedVideos:(unsigned long long)arg2 totalVideos:(unsigned long long)arg3;
- (void)didDeleteVideoFromVideoListID:(id)arg1;
- (void)didDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (void)deleteVideoWithID:(id)arg1;
- (unsigned long long)totalOfflineStorageBytes;
- (unsigned long long)usedOfflineStorageBytes;
- (unsigned long long)freeDeviceStorageBytes;
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)syncWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (_Bool)canSync;
- (void)dealloc;
- (id)initWithVideoList:(id)arg1 videoListCheckType:(int)arg2 offlineCandidateType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

