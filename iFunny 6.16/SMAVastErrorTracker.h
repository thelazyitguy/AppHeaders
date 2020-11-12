//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAVastErrorTracking-Protocol.h>

@class NSDictionary, NSString;
@protocol SMABeacon;

@interface SMAVastErrorTracker : NSObject <SMAVastErrorTracking>
{
    id <SMABeacon> _beacon;
    NSDictionary *_allErrorURLs;
}

@property(copy, nonatomic) NSDictionary *allErrorURLs; // @synthesize allErrorURLs=_allErrorURLs;
@property(retain, nonatomic) id <SMABeacon> beacon; // @synthesize beacon=_beacon;
- (void).cxx_destruct;
- (id)urlsForTrackingError:(id)arg1;
- (void)sendTrackingRequest:(id)arg1;
- (void)trackError:(id)arg1 withInfo:(id)arg2;
- (id)initWithBeaconTracker:(id)arg1 errorURLs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
