//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTCORLifecycleProtocol-Protocol.h"

@class NSString;
@protocol GDTCORApplicationProtocol, OS_dispatch_queue;

@interface GDTCORTransformer : NSObject <GDTCORLifecycleProtocol>
{
    NSObject<OS_dispatch_queue> *_eventWritingQueue;
    id <GDTCORApplicationProtocol> _application;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GDTCORApplicationProtocol> application; // @synthesize application=_application;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventWritingQueue; // @synthesize eventWritingQueue=_eventWritingQueue;
- (void)appWillTerminate:(id)arg1;
- (void)transformEvent:(id)arg1 withTransformers:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)initWithApplication:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

