//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNPeopleDiscoveryModuleLayout.h>

@class NSArray;

@interface TFNPeopleDiscoveryUserProfileCarouselModuleLayout : TFNPeopleDiscoveryModuleLayout
{
    NSArray *_userRecommendations;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *userRecommendations; // @synthesize userRecommendations=_userRecommendations;
- (id)initWithModuleLayoutHeader:(id)arg1;
- (id)init;
- (id)initWithModuleLayoutHeader:(id)arg1 userRecommendations:(id)arg2 type:(long long)arg3;

@end

