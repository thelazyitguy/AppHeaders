//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTOfflineDefaultVideoEntityGenerator.h"

@class GIMMe;
@protocol YTEntityStore, YTOfflineEntityGeneratorDelegate;

@interface YTOfflineVideoPolicyEntityGenerator : YTOfflineDefaultVideoEntityGenerator
{
    id <YTOfflineEntityGeneratorDelegate> _delegate;
    id <YTEntityStore> _entityStore;
    GIMMe *_gimme;
}

+ (id)entityKeyForVideoID:(id)arg1;
+ (id)entityType;
- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)downloadDidFailWithOfflineVideo:(id)arg1;
- (void)didUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideo:(id)arg3;
- (void)didSaveOfflineVideo:(id)arg1;
- (void)didUpdateOfflineStateActionsForVideo:(id)arg1;
- (void)didDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (void)didDeleteOfflineVideoWithID:(id)arg1;
- (void)didDeleteAllOfflineVideosWithIDs:(id)arg1;
- (void)updateEntityForVideo:(id)arg1;
- (void)deleteVideosWithIDs:(id)arg1;
- (id)updatesForDidDeleteOfflineVideosForUserID:(id)arg1 deletedVideoIDs:(id)arg2;
- (id)updatesForDidDeleteOfflineVideoWithID:(id)arg1;
- (id)updatesForDidDeleteAllOfflineVideosWithIDs:(id)arg1;
- (id)updatesForDownloadDidFailWithOfflineVideo:(id)arg1;
- (id)updatesForDidUpdateFromStatus:(int)arg1 toStatus:(int)arg2 forOfflineVideo:(id)arg3;
- (id)updatesForDidSaveOfflineVideo:(id)arg1;
- (id)updatesForDidUpdateOfflineStateActionsForVideo:(id)arg1;
- (id)generateInitialEntitiesForVideos:(id)arg1;
- (id)updatesForDeleteVideosWithIDs:(id)arg1;
- (id)updatesForVideo:(id)arg1;
- (id)offlineVideoPolicyEntityForVideo:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

