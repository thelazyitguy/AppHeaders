//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIModule-Protocol.h"

@class NSString;
@protocol AMIWeblabBridgeService;

@interface SXFeatureSearchInfiniteScrollAdvertising : NSObject <AMIModule>
{
    id <AMIWeblabBridgeService> _weblabBridge;
}

+ (id)sharedModule;
@property(nonatomic) __weak id <AMIWeblabBridgeService> weblabBridge; // @synthesize weblabBridge=_weblabBridge;
- (void).cxx_destruct;
- (void)startModuleWithContext:(id)arg1;
- (id)viewControllerFactoryForModuleSpec:(id)arg1;
- (id)initWithParameters:(id)arg1;
@property(readonly, nonatomic) _Bool useAdvertising;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
