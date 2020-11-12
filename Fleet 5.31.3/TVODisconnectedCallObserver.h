//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwilioVoice/TVOCallDelegate-Protocol.h>

@class NSString;

@interface TVODisconnectedCallObserver : NSObject <TVOCallDelegate>
{
    unsigned long long _backgroundTask;
}

@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
- (void)call:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)call:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)callDidConnect:(id)arg1;
- (void)endBackgroundTask;
- (void)startDisconnectBackgroundTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
