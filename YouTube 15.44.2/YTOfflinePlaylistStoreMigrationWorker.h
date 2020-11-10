//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseWorker.h>

#import <Module_Framework/YTWorker-Protocol.h>

@class GIMMe, NSString, YTOfflinePlaylistController, YTUserDefaults;
@protocol YTOfflineConfig, YTWorkerDelegate;

@interface YTOfflinePlaylistStoreMigrationWorker : YTBaseWorker <YTWorker>
{
    YTOfflinePlaylistController *_offlinePlaylistController;
    id <YTOfflineConfig> _offlineConfig;
    YTUserDefaults *_userDefaults;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

