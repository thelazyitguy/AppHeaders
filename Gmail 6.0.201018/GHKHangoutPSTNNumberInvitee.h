//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GHKHangoutPSTNNumberInvitee-Protocol.h"

@class CPBHEligibleCallerIdToken, NSString;

@interface GHKHangoutPSTNNumberInvitee : NSObject <GHKHangoutPSTNNumberInvitee>
{
    _Bool _isEmergencyCall;
    _Bool _isCallerIdBlocked;
    NSString *_e164;
    CPBHEligibleCallerIdToken *_callerIdToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CPBHEligibleCallerIdToken *callerIdToken; // @synthesize callerIdToken=_callerIdToken;
@property(readonly, nonatomic) _Bool isCallerIdBlocked; // @synthesize isCallerIdBlocked=_isCallerIdBlocked;
@property(readonly, nonatomic) _Bool isEmergencyCall; // @synthesize isEmergencyCall=_isEmergencyCall;
@property(readonly, nonatomic) NSString *e164; // @synthesize e164=_e164;
- (id)initWithE164:(id)arg1 isEmergencyCall:(_Bool)arg2 isCallerIdBlocked:(_Bool)arg3 callerIdToken:(id)arg4;
- (id)initWithE164:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
