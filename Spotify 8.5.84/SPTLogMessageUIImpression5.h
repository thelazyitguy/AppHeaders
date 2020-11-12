//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageUIImpression5 : SPTLogMessage
{
    NSString *_requestIdValue;
    NSString *_featureIdValue;
    NSString *_pageuriValue;
    NSString *_sectionIdValue;
    long long _itemIndexValue;
    NSString *_targetUriValue;
    NSString *_impressionTypeValue;
    NSString *_renderTypeValue;
    double _timestampValue;
}

+ (id)messageWithRequestId:(id)arg1 featureId:(id)arg2 pageuri:(id)arg3 sectionId:(id)arg4 itemIndex:(long long)arg5 targetUri:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8 timestamp:(double)arg9;
- (void).cxx_destruct;
@property(nonatomic) double timestampValue; // @synthesize timestampValue=_timestampValue;
@property(copy, nonatomic) NSString *renderTypeValue; // @synthesize renderTypeValue=_renderTypeValue;
@property(copy, nonatomic) NSString *impressionTypeValue; // @synthesize impressionTypeValue=_impressionTypeValue;
@property(copy, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(nonatomic) long long itemIndexValue; // @synthesize itemIndexValue=_itemIndexValue;
@property(copy, nonatomic) NSString *sectionIdValue; // @synthesize sectionIdValue=_sectionIdValue;
@property(copy, nonatomic) NSString *pageuriValue; // @synthesize pageuriValue=_pageuriValue;
@property(copy, nonatomic) NSString *featureIdValue; // @synthesize featureIdValue=_featureIdValue;
@property(copy, nonatomic) NSString *requestIdValue; // @synthesize requestIdValue=_requestIdValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
