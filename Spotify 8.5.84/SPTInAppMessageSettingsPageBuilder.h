//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureSettingsUIProvider-Protocol.h"

@class NSString;
@protocol SPTFeatureSettingsItemFactory;

@interface SPTInAppMessageSettingsPageBuilder : NSObject <SPTFeatureSettingsUIProvider>
{
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (id)itemForPreviewButtonToggle;
- (id)itemForDevProdToggle;
- (void)itemizeSettingsPage:(id)arg1;
- (id)initWithFeatureSettingsItemFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
