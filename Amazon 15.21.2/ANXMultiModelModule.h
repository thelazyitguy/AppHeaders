//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANXFeatureModule-Protocol.h"

@class ANXMultiModelPlayerManager, ANXMultiModelUIManager, NSString;
@protocol ANXMultiModelNavigationListener;

@interface ANXMultiModelModule : NSObject <ANXFeatureModule>
{
    ANXMultiModelUIManager *_uiManager;
    ANXMultiModelPlayerManager *_playerManager;
    id <ANXMultiModelNavigationListener> _navigationListener;
}

@property(retain, nonatomic) id <ANXMultiModelNavigationListener> navigationListener; // @synthesize navigationListener=_navigationListener;
@property(retain, nonatomic) ANXMultiModelPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
@property(retain, nonatomic) ANXMultiModelUIManager *uiManager; // @synthesize uiManager=_uiManager;
- (void).cxx_destruct;
- (_Bool)isMultiModelImageBlockWeblabEnabled;
- (void)startModuleWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

