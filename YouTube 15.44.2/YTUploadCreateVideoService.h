//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class YTApiaryResourceParser;

@interface YTUploadCreateVideoService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (void)makeCreateVideoRequestWithFrontendID:(id)arg1 uploadType:(int)arg2 resourceID:(id)arg3 editInstructions:(id)arg4 clientVSI:(id)arg5 videoShortsCreation:(id)arg6 callbackQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)init;

@end

