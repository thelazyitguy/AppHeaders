//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class Carousel, NSString, User;
@protocol UserPostFeedPresentable;

@interface UserPostFeedPresenter : FeedPresenter
{
    User *_user;
    NSString *_username;
    Carousel *_topKarmaSubredditCarousel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Carousel *topKarmaSubredditCarousel; // @synthesize topKarmaSubredditCarousel=_topKarmaSubredditCarousel;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
- (id)listingTraceName;
- (id)analyticsPageType;
- (id)analyticsScreenViewName;
- (id)availableFeedSorts;
- (_Bool)shouldUseNewFeedSort;
- (id)createListingNetworkSourceWithURLString:(id)arg1 parameters:(id)arg2;
- (void)configureWithUsername:(id)arg1;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <UserPostFeedPresentable> presentable; // @dynamic presentable;

@end
