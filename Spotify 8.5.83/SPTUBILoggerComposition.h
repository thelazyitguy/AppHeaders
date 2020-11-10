//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBILogger-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBILogger;

@interface SPTUBILoggerComposition : NSObject <SPTUBILogger>
{
    id <SPTUBILogger> _forwardedLogger;
    NSArray *_sideEffectLoggers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sideEffectLoggers; // @synthesize sideEffectLoggers=_sideEffectLoggers;
@property(retain, nonatomic) id <SPTUBILogger> forwardedLogger; // @synthesize forwardedLogger=_forwardedLogger;
- (id)logNonAuthenticatedImpression:(id)arg1;
- (id)logImpression:(id)arg1;
- (id)logNonAuthenticatedInteraction:(id)arg1;
- (id)logInteraction:(id)arg1;
- (id)initWithForwardedLogger:(id)arg1 sideEffectLoggers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

