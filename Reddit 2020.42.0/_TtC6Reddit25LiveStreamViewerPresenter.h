//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC6Reddit25LiveStreamViewerPresenter : NSObject
{
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: kPromptPkBaseString
    // Error parsing type: , name: kPromptTooltipTimerInterval
    // Error parsing type: , name: kPromptNumberOfDaysToHide
    // Error parsing type: , name: promptTooltipSubredditInfo
    // Error parsing type: , name: enablePrompts
    // Error parsing type: , name: streamManager
    // Error parsing type: , name: delegate
    // Error parsing type: , name: didInitialTopStreamsFetchOccur
    // Error parsing type: , name: streamPkBeingFetched
    // Error parsing type: , name: viewSessionId
    // Error parsing type: , name: current
    // Error parsing type: , name: deeplinkId
    // Error parsing type: , name: oneSecondIntervalTimer
    // Error parsing type: , name: heartbeatTimer
    // Error parsing type: , name: heartbeatDelayTimer
    // Error parsing type: , name: promptTooltipTimer
    // Error parsing type: , name: state
    // Error parsing type: , name: isShareSheetOpen
    // Error parsing type: , name: fetchStreamSecondsCurrent
    // Error parsing type: , name: streamUpdateSecondsOriginal
    // Error parsing type: , name: streamUpdateSecondsCurrent
    // Error parsing type: , name: streamEndedSecondsOriginal
    // Error parsing type: , name: streamEndedSecondsCurrent
    // Error parsing type: , name: userReportObserver
    // Error parsing type: , name: userHideObserver
    // Error parsing type: , name: isVideoV2Enabled
}

- (void).cxx_destruct;
- (id)init;
- (void)didUpdateStreamingConfig;
- (void)subredditSubscriptionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithAccountContext:(id)arg1 streamManager:(id)arg2 initialStream:(id)arg3;
- (id)initWithAccountContext:(id)arg1 streamManager:(id)arg2 deeplinkId:(id)arg3;

@end
