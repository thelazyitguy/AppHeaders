//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseInnerTubeRequestService.h>

@class GIMMe, YTApiaryResourceParser;

@interface YTAutoOfflineService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)makeRequestWithVideoListChecks:(id)arg1 offlineCandidateChecks:(id)arg2 currentOfflineBytes:(unsigned long long)arg3 totalOfflineBytes:(unsigned long long)arg4 timeSinceLastOfflinePlayback:(unsigned int)arg5 currentBatteryLevel:(float)arg6 innerTubeResponseBlock:(CDUnknownBlockType)arg7 errorBlock:(CDUnknownBlockType)arg8;
- (id)init;

@end

