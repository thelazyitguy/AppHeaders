//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class YTApiaryResourceParser;

@interface YTReelCameraService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_getReelCameraResourceParser;
    YTApiaryResourceParser *_getReelCommentsResourceParser;
}

- (void).cxx_destruct;
- (void)fetchCommentsWithSearchQuery:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeGetReelCameraRequestWithAvailableAssetIDs:(id)arg1 params:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

