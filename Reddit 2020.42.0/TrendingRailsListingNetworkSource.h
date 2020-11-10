//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedNetworkSource.h"

@class NSArray, NSDictionary, NSString, SubredditCategory;
@protocol DiscoveryUnitViewModelDataProviderDelegate;

@interface TrendingRailsListingNetworkSource : FeedNetworkSource
{
    NSString *_viewTreatment;
    SubredditCategory *_railsTopic;
    NSArray *_headerObjects;
    NSDictionary *_posts;
    NSDictionary *_subreddits;
    NSDictionary *_flairs;
    NSDictionary *_discoveryUnitViewModels;
    id <DiscoveryUnitViewModelDataProviderDelegate> _carouselDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DiscoveryUnitViewModelDataProviderDelegate> carouselDelegate; // @synthesize carouselDelegate=_carouselDelegate;
@property(copy, nonatomic) NSDictionary *discoveryUnitViewModels; // @synthesize discoveryUnitViewModels=_discoveryUnitViewModels;
@property(copy, nonatomic) NSDictionary *flairs; // @synthesize flairs=_flairs;
@property(copy, nonatomic) NSDictionary *subreddits; // @synthesize subreddits=_subreddits;
@property(copy, nonatomic) NSDictionary *posts; // @synthesize posts=_posts;
@property(retain, nonatomic) NSArray *headerObjects; // @synthesize headerObjects=_headerObjects;
@property(retain, nonatomic) SubredditCategory *railsTopic; // @synthesize railsTopic=_railsTopic;
@property(copy, nonatomic) NSString *viewTreatment; // @synthesize viewTreatment=_viewTreatment;
- (void)parseData:(id)arg1;
- (id)discoveryUnitViewModelsForData:(id)arg1;
- (id)orderedFlairForDiscoveryUnit:(id)arg1;
- (id)orderedSearchTermsForDiscoveryUnit:(id)arg1;
- (id)orderedSubredditsForDiscoveryUnit:(id)arg1;
- (id)orderedPostsForDiscoveryUnit:(id)arg1;
- (id)topicForData:(id)arg1;
- (id)postsFlairForData:(id)arg1;
- (id)searchesForDiscoveryUnitData:(id)arg1;
- (id)postsForData:(id)arg1;
- (id)subredditsForData:(id)arg1;
- (id)initWithService:(id)arg1 query:(id)arg2 withSort:(id)arg3 withTime:(id)arg4 withLimit:(long long)arg5 withinSubreddit:(_Bool)arg6 category:(id)arg7 source:(id)arg8 correlationId:(id)arg9 queryId:(id)arg10 carouselDelegate:(id)arg11;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

