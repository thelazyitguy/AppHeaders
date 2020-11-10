//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationItemTitleProvider-Protocol.h"

@class NSString, SPTNavigationFeatureProperties;

@interface SPTNavigationItemTitleProviderImplementation : NSObject <SPTNavigationItemTitleProvider>
{
    SPTNavigationFeatureProperties *_properties;
}

+ (id)localizedTitleForUpsellNavigationItem:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTNavigationFeatureProperties *properties; // @synthesize properties=_properties;
- (id)localizedTitleForSourceIdentifier:(id)arg1;
- (id)initWithFeatureProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

