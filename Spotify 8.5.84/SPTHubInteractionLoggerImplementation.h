//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubInteractionLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTUBILogger;

@interface SPTHubInteractionLoggerImplementation : NSObject <SPTHubInteractionLogger>
{
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
    NSString *_viewURIString;
    id <SPTUBILogger> _ubiLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, copy, nonatomic) NSString *viewURIString; // @synthesize viewURIString=_viewURIString;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (id)logInteraction:(id)arg1;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2 pageURI:(id)arg3 ubiLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

