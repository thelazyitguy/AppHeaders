//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/AVEClearcutLogEventProvider-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SKTVisualElementLogEventProvider : NSObject <AVEClearcutLogEventProvider>
{
    _Bool _shouldResetLoggedVEIDsToEvents;
    NSString *_fullClientVersion;
    NSMutableDictionary *_loggedVEIDsToEvents;
    long long _logSessionDidBeginTimeInMilliseconds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResetLoggedVEIDsToEvents; // @synthesize shouldResetLoggedVEIDsToEvents=_shouldResetLoggedVEIDsToEvents;
@property(nonatomic) long long logSessionDidBeginTimeInMilliseconds; // @synthesize logSessionDidBeginTimeInMilliseconds=_logSessionDidBeginTimeInMilliseconds;
@property(retain, nonatomic) NSMutableDictionary *loggedVEIDsToEvents; // @synthesize loggedVEIDsToEvents=_loggedVEIDsToEvents;
@property(readonly, nonatomic) NSString *fullClientVersion; // @synthesize fullClientVersion=_fullClientVersion;
- (void)logSessionDidBegin:(id)arg1;
- (id)veIDFilter;
- (void)updateLogEvent:(id)arg1 forInteraction:(CDStruct_1ef3fb1f)arg2 withVisualElements:(id)arg3;
- (long long)logSource;
- (id)initWithClientInfoProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

