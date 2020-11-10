//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveStream, StreamingConfig, StreamingSubredditInfo;

@interface _TtC6Reddit13StreamManager : NSObject
{
    // Error parsing type: , name: isActive
    // Error parsing type: , name: presentingSource
    // Error parsing type: , name: originPresentingSource
    // Error parsing type: , name: stoppedByAppEnteringBackground
    // Error parsing type: , name: history
    // Error parsing type: , name: unwatched
    // Error parsing type: , name: ended
    // Error parsing type: , name: lastFetched
    // Error parsing type: , name: removeZombiesTimer
    // Error parsing type: , name: fetchConfigTimer
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: streamingConfig
    // Error parsing type: , name: isConfigValid
    // Error parsing type: , name: availableSubredditInfoItems
    // Error parsing type: , name: currentSubredditInfo
    // Error parsing type: , name: deeplinkSubredditName
}

- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterForeground;
- (void)appWillEnterBackground;
- (void)dealloc;
- (id)initWithAccountContext:(id)arg1 source:(long long)arg2 deeplinkSubredditName:(id)arg3 streamingConfig:(id)arg4;
- (id)initWithAccountContext:(id)arg1 source:(long long)arg2 streamingConfig:(id)arg3;
- (id)initWithAccountContext:(id)arg1 deeplinkSubredditName:(id)arg2;
@property(nonatomic, retain) StreamingSubredditInfo *currentSubredditInfo; // @synthesize currentSubredditInfo;
@property(nonatomic, retain) StreamingConfig *streamingConfig; // @synthesize streamingConfig;
@property(nonatomic, readonly) LiveStream *topActive;
@property(nonatomic, readonly) LiveStream *topUnwatched;

@end

