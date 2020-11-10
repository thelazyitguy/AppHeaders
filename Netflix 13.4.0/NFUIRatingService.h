//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DataBrokerObjectContext, NSMutableDictionary;

@interface NFUIRatingService : NSObject
{
    NSMutableDictionary *_inFlightFalcorRequests;
    DataBrokerObjectContext *_objectContext;
}

+ (id)allLocalizedRatingTitles;
+ (long long)thumbRatingForValue:(id)arg1;
+ (id)ratedTitleForThumbRating:(long long)arg1;
+ (id)accessibilityLabelForThumbRating:(long long)arg1;
+ (id)iconForThumbRating:(long long)arg1 isSolid:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) DataBrokerObjectContext *objectContext; // @synthesize objectContext=_objectContext;
@property(retain, nonatomic) NSMutableDictionary *inFlightFalcorRequests; // @synthesize inFlightFalcorRequests=_inFlightFalcorRequests;
- (void)setHasSeenMessageForFeatureKey:(id)arg1;
- (void)shouldShowMessageForKey:(id)arg1 featureKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shouldShowFirstThumbsRatingMessage:(CDUnknownBlockType)arg1;
- (void)registerHasSeenFirstThumbsRatingMessage;
- (void)cancelActionLogging:(id)arg1;
- (void)endLoggingWithError:(id)arg1 actionId:(id)arg2;
- (id)beginLoggingForEntityId:(id)arg1 trackingInfo:(id)arg2 withThumbRating:(id)arg3 command:(id)arg4;
- (void)setRatingValue:(id)arg1 forEntityId:(id)arg2 trackingInfo:(id)arg3 token:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)setThumbRating:(long long)arg1 forEntityId:(id)arg2 trackingInfo:(id)arg3 token:(id)arg4 command:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)setThumbRating:(long long)arg1 forEntityId:(id)arg2 trackingInfo:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)initWithObjectContext:(id)arg1;

@end

