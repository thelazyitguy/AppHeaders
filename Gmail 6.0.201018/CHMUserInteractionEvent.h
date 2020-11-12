//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CHMLogEvent-Protocol.h"

@class NFDTarget, NSArray, NSString;

@interface CHMUserInteractionEvent : NSObject <CHMLogEvent>
{
    NSString *_account;
    NSArray *_threadContexts;
    NFDTarget *_target;
    long long _interactionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
@property(retain, nonatomic) NFDTarget *target; // @synthesize target=_target;
@property(copy, nonatomic) NSArray *threadContexts; // @synthesize threadContexts=_threadContexts;
@property(readonly, nonatomic) NSString *account; // @synthesize account=_account;
@property(readonly, copy) NSString *description;
- (id)initWithInteractionType:(long long)arg1 threadContexts:(id)arg2 account:(id)arg3 target:(id)arg4;
- (id)initWithInteractionType:(long long)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
