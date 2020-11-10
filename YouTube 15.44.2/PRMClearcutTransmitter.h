//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PRMTransmitter-Protocol.h>

@class NSString;
@protocol CCTClearcutLogger, OS_dispatch_queue, PRMGaiaIDProvider;

@interface PRMClearcutTransmitter : NSObject <PRMTransmitter>
{
    id <CCTClearcutLogger> _clearcutLogger;
    id <PRMGaiaIDProvider> _gaiaIdProvider;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

- (void).cxx_destruct;
- (void)sendTransmittable:(id)arg1 eventContext:(id)arg2;
- (void)waitForLogging;
- (id)initWithClearcutLogger:(id)arg1 gaiaIdProvider:(id)arg2;
- (id)initWithLogSource:(int)arg1 gaiaIdProvider:(id)arg2;
- (id)initWithClearcutLogger:(id)arg1;
- (id)initWithLogSource:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

