//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary;

@interface YTOfflineInterleavingUpdateController : NSObject
{
    NSMutableDictionary *_updateInstructions;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)getVideoIDToDeleteWithUpdate:(id)arg1;
- (id)getVideoIDsToDownloadWithUpdate:(id)arg1;
- (_Bool)didVideoListFinishUpdate:(id)arg1;
- (void)createInstructionsForUpdate:(id)arg1;
- (void)deleteVideoFromUpdate:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)maybeDownloadVideoFromUpdate:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)performRemoveAddInOrderDedupeStrategyUpdate:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)performUnknownStrategyUpdate:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (int)offlineVideoSelectionStrategyForUpdate:(id)arg1;
- (void)deleteInterleavingUpdateForVideoListWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchInterleavingUpdateForVideoListWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchVideoListIDNeedingUpdateWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)performUpdateForVideoListWithID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

