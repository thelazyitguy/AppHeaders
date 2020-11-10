//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MuxCore/MUXSDKEventHandling-Protocol.h>
#import <MuxCore/MUXSDKNetworkRequestsCompletion-Protocol.h>

@class MUXSDKDispatcher, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol MUXSDKTiming;

@interface MUXSDKEventQueue : NSObject <MUXSDKEventHandling, MUXSDKNetworkRequestsCompletion>
{
    long long _lastEventTime;
    long long _lastBeaconSentTime;
    _Bool _lastBeaconCompleted;
    _Bool _rateLimited;
    NSMutableDictionary *_previousBeaconData;
    NSSet *_dataToAlwaysSend;
    NSSet *_flushEvents;
    NSMutableArray *_eventQueue;
    NSString *_projectKey;
    NSString *_viewerOsFamily;
    id <MUXSDKTiming> currentTime;
    MUXSDKDispatcher *_dispatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MUXSDKDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain) id <MUXSDKTiming> currentTime; // @synthesize currentTime;
- (void)deduplicateBeaconData:(id)arg1;
- (void)onComplete:(_Bool)arg1;
- (void)sendBeaconQueue:(_Bool)arg1;
- (void)flush;
- (_Bool)queueEvent:(id)arg1;
- (void)handle:(id)arg1;
- (id)init;

@end

