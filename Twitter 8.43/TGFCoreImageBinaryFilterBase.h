//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterGraphicsFilters/TGFFilter-Protocol.h>

@class NSString;

@interface TGFCoreImageBinaryFilterBase : NSObject <TGFFilter>
{
    NSString *_filterName;
    _Bool _canDissolve;
    float _minAdjustmentValue;
    float _maxAdjustmentValue;
    float _defaultAdjustmentValue;
    float _inertAdjustmentValue;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float inertAdjustmentValue; // @synthesize inertAdjustmentValue=_inertAdjustmentValue;
@property(readonly, nonatomic) float defaultAdjustmentValue; // @synthesize defaultAdjustmentValue=_defaultAdjustmentValue;
@property(readonly, nonatomic) float maxAdjustmentValue; // @synthesize maxAdjustmentValue=_maxAdjustmentValue;
@property(readonly, nonatomic) float minAdjustmentValue; // @synthesize minAdjustmentValue=_minAdjustmentValue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)apply:(id)arg1;
- (id)initWithIdentifier:(id)arg1 CIFilterName:(id)arg2 supportsDissolving:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
