//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class YTApiaryResourceParser;

@interface YTUploadDeleteReelService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (void)makeDeleteReelRequestWithPlaylistID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

