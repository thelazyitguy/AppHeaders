//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol ANPChromeInfoService, OS_dispatch_queue;

@interface ANPChromeInfoSSNAPService : NSObject <RCTBridgeModule>
{
    id <ANPChromeInfoService> _chromeInfoService;
}

+ (const struct RCTMethodInfo *)__rct_export__441;
+ (const struct RCTMethodInfo *)__rct_export__350;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) id <ANPChromeInfoService> chromeInfoService; // @synthesize chromeInfoService=_chromeInfoService;
- (void).cxx_destruct;
- (void)getTopPadding:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)getBottomPadding:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end
