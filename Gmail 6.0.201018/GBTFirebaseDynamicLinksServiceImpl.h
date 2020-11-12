//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GBTFirebaseDynamicLinksService-Protocol.h"

@class FIRDynamicLinks, NSString;
@protocol GBTFirebaseDynamicLinksServiceImplDeps;

@interface GBTFirebaseDynamicLinksServiceImpl : NSObject <GBTFirebaseDynamicLinksService>
{
    id <GBTFirebaseDynamicLinksServiceImplDeps> _deps;
    FIRDynamicLinks *_bigtopDynamicLinks;
    FIRDynamicLinks *_meetDynamicLinks;
}

- (void).cxx_destruct;
- (_Bool)shouldRunHubStartupCode;
- (void)handleDynamicLink:(id)arg1 promise:(id *)arg2;
- (_Bool)handleWebURL:(id)arg1 promise:(id *)arg2;
- (_Bool)handleCustomSchemeURL:(id)arg1 promise:(id *)arg2;
- (void)checkForPendingDynamicLink;
- (void)setUpWithLaunchOptions:(id)arg1;
- (id)initWithDeps:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
