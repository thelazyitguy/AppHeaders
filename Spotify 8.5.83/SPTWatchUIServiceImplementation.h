//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchUIService-Protocol.h"

@class NSString, SPTAllocationContext, SPTWatchUIContextMenuActionsRegistrar;
@protocol SPContextMenuFeature, SPTWatchPlatformService;

@interface SPTWatchUIServiceImplementation : NSObject <SPTWatchUIService>
{
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTWatchPlatformService> _watchPlatformService;
    SPTWatchUIContextMenuActionsRegistrar *_contextMenuActionsRegistrar;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTWatchUIContextMenuActionsRegistrar *contextMenuActionsRegistrar; // @synthesize contextMenuActionsRegistrar=_contextMenuActionsRegistrar;
@property(nonatomic) __weak id <SPTWatchPlatformService> watchPlatformService; // @synthesize watchPlatformService=_watchPlatformService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

