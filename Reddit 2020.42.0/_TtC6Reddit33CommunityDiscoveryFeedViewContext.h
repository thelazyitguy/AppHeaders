//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FeedPostOptions, _TtC10RedditCore22CommunityDiscoveryUnit, _TtC6Reddit27CommunityDiscoveryAnalytics;
@protocol ViewContext;

@interface _TtC6Reddit33CommunityDiscoveryFeedViewContext : NSObject
{
    // Error parsing type: , name: viewContext
    // Error parsing type: , name: communityDiscoveryUnit
    // Error parsing type: , name: feedPostOptions
    // Error parsing type: , name: communityDiscoveryAnalytics
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCommunityDiscoveryUnit:(id)arg1 viewContext:(id)arg2 feedPostOptions:(id)arg3 communityDiscoveryAnalytics:(id)arg4;
@property(nonatomic, readonly) _TtC6Reddit27CommunityDiscoveryAnalytics *communityDiscoveryAnalytics; // @synthesize communityDiscoveryAnalytics;
@property(nonatomic, readonly) FeedPostOptions *feedPostOptions; // @synthesize feedPostOptions;
@property(nonatomic, readonly) _TtC10RedditCore22CommunityDiscoveryUnit *communityDiscoveryUnit; // @synthesize communityDiscoveryUnit;
@property(nonatomic, readonly) id <ViewContext> viewContext; // @synthesize viewContext;

@end
