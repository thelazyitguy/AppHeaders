//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIUserBehaviourInstrumentation-Protocol.h"

@class NSString;
@protocol SPTUBILogger;

@interface SPTUBIUserBehaviourInstrumentationImplementation : NSObject <SPTUBIUserBehaviourInstrumentation>
{
    id <SPTUBILogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBILogger> logger; // @synthesize logger=_logger;
- (id)provideHubsInstrumentationWithPageURI:(id)arg1 pageId:(id)arg2;
- (id)provideLogger;
- (id)initWithLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
