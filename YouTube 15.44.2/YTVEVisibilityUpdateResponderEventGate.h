//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol YTResponder;

@interface YTVEVisibilityUpdateResponderEventGate : NSObject
{
    NSMutableArray *_pendingVisibilityUpdates;
    id <YTResponder> _responder;
    _Bool _allowVisibilityEventsToPropagate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowVisibilityEventsToPropagate; // @synthesize allowVisibilityEventsToPropagate=_allowVisibilityEventsToPropagate;
- (void)holdVisibilityUpdateEvent:(id)arg1;
- (void)sendPendingUpdates;
- (void)reset;
- (id)initWithResponder:(id)arg1;

@end
