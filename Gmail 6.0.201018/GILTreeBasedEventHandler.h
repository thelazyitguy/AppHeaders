//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GILEventHandler-Protocol.h"

@class NSSet, NSString;
@protocol GILTransport, GILTreeEventProducer;

@interface GILTreeBasedEventHandler : NSObject <GILEventHandler>
{
    id <GILTransport> _transport;
    NSSet *_supportedComponentIDs;
    _Bool _batched;
    id <GILTreeEventProducer> _eventProducer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GILTreeEventProducer> eventProducer; // @synthesize eventProducer=_eventProducer;
- (void)handleEvent:(id)arg1 withExtension:(id)arg2;
- (id)supportedComponentIDs;
- (id)initWithEventProducer:(id)arg1 transport:(id)arg2 supportedComponentIDs:(id)arg3;
- (id)initWithEventProducer:(id)arg1 transport:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
