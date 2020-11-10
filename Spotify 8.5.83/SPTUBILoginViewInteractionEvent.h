//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTUBILoginViewInteractionEventLocation;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBILoginViewInteractionEvent : NSObject <SPTUBIInteractionEvent>
{
    SPTUBILoginViewInteractionEventLocation *_location;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
    NSString *_action;
    long long _actionVersion;
    NSDictionary *_actionParameters;
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(nonatomic) long long actionVersion; // @synthesize actionVersion=_actionVersion;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(retain, nonatomic) SPTUBILoginViewInteractionEventLocation *location; // @synthesize location=_location;
- (id)initWithType:(id)arg1 components:(id)arg2 parentAbsoluteLocation:(id)arg3 action:(id)arg4 actionVersion:(long long)arg5 actionParameters:(id)arg6 errors:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

