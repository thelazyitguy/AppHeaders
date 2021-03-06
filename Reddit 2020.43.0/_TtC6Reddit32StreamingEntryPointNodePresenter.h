//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FeedPostOptions, LiveStream, RedditService, StreamingConfig, _TtC6Reddit13StreamManager;
@protocol AccountContext, _TtP6Reddit40StreamingEntryPointNodePresenterDelegate_;

@interface _TtC6Reddit32StreamingEntryPointNodePresenter : NSObject
{
    // Error parsing type: , name: constants
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: streamManager
    // Error parsing type: , name: options
    // Error parsing type: , name: current
    // Error parsing type: , name: delegate
    // Error parsing type: , name: pageTypeString
    // Error parsing type: , name: viewSessionId
    // Error parsing type: , name: playbackTracker
    // Error parsing type: , name: v2PlaybackTracker
    // Error parsing type: , name: isLive
    // Error parsing type: , name: topStreamsUpdateTimer
    // Error parsing type: , name: heartbeatTimer
    // Error parsing type: , name: heartbeatDelayTimer
    // Error parsing type: , name: streamUpdateTimer
    // Error parsing type: , name: isActive
}

- (void).cxx_destruct;
- (id)init;
- (void)didUpdateStreamingConfig;
- (void)beginViewSession;
- (void)resetSession;
- (void)streamDidPlayToEnd;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithAccountContext:(id)arg1 streamManager:(id)arg2 options:(id)arg3 pageType:(id)arg4 delegate:(id)arg5 isLegacyNode:(_Bool)arg6;
@property(nonatomic, readonly) StreamingConfig *streamingConfig;
@property(nonatomic, readonly) RedditService *service;
@property(nonatomic) __weak id <_TtP6Reddit40StreamingEntryPointNodePresenterDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) LiveStream *current; // @synthesize current;
@property(nonatomic, readonly) FeedPostOptions *options; // @synthesize options;
@property(nonatomic, readonly) _TtC6Reddit13StreamManager *streamManager; // @synthesize streamManager;
@property(nonatomic, readonly) id <AccountContext> accountContext; // @synthesize accountContext;

@end

