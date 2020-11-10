//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderSatelliteServiceResponder-Protocol.h"

@class NSString, SPTEventSenderCanaryKeeper, SPTEventSenderTransportImplementation;

@interface SPTEventSenderSatelliteServiceResponderImplementation : NSObject <SPTEventSenderSatelliteServiceResponder>
{
    SPTEventSenderTransportImplementation *_transport;
    SPTEventSenderCanaryKeeper *_canaryKeeper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTEventSenderCanaryKeeper *canaryKeeper; // @synthesize canaryKeeper=_canaryKeeper;
@property(retain, nonatomic) SPTEventSenderTransportImplementation *transport; // @synthesize transport=_transport;
- (void)satelliteServiceDidUnload;
- (void)satelliteServiceDidLoadWithRemoteConfigResolver:(id)arg1;
- (id)initWithTransport:(id)arg1 canaryKeeper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

