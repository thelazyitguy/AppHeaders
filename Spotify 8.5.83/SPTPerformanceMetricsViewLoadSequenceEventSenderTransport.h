//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLoadSequenceTransport-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTPerformanceMetricsViewLoadSequenceEventSenderTransport : NSObject <SPTViewLoadSequenceTransport>
{
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void)handleViewLoadSequence:(id)arg1;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

