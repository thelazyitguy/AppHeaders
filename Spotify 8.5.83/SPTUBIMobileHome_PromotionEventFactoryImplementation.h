//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileHome_PromotionEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileHome_PromotionEventFactoryImplementation : NSObject <SPTUBIMobileHome_PromotionEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithIdentifier:(id)arg1 position:(long long)arg2 components:(id)arg3 parentAbsoluteLocation:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)promotionv3FactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)promotionv2FactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)promotionv1FactoryWithIdentifier:(id)arg1 position:(long long)arg2 uri:(id)arg3;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 position:(long long)arg2 components:(id)arg3 parentAbsoluteLocation:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

