//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarouselDataSource-Protocol.h"
#import "CarouselDataSourceInternal-Protocol.h"
#import "ListingNetworkSourceDelegate-Protocol.h"

@class NSArray, NSError, NSString, RedditService, SubredditsNetworkSource;
@protocol TemplateParserContext;

@interface FavoritesCarouselDataSource : NSObject <CarouselDataSource, CarouselDataSourceInternal, ListingNetworkSourceDelegate>
{
    id <TemplateParserContext> _templateContext;
    NSError *_lastError;
    RedditService *_service;
    SubredditsNetworkSource *_subscriptionNetworkSource;
    CDUnknownBlockType _completion;
    NSArray *_carouselItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *carouselItems; // @synthesize carouselItems=_carouselItems;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SubredditsNetworkSource *subscriptionNetworkSource; // @synthesize subscriptionNetworkSource=_subscriptionNetworkSource;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(readonly, nonatomic) __weak id <TemplateParserContext> templateContext; // @synthesize templateContext=_templateContext;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (_Bool)listingNetworkSourceShouldFilterObject:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;
- (void)filterCarouselItems;
- (_Bool)hasMoreContent;
- (id)carouselItemsForObjects:(id)arg1;
- (void)fetchCarouselItemsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithService:(id)arg1 fetchURLString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
