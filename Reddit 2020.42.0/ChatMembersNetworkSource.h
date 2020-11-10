//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ListingNetworkSource.h"

@class SBDGroupChannelMemberListQuery, SubredditChannel;

@interface ChatMembersNetworkSource : ListingNetworkSource
{
    SubredditChannel *_subredditChannel;
    SBDGroupChannelMemberListQuery *_query;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBDGroupChannelMemberListQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) SubredditChannel *subredditChannel; // @synthesize subredditChannel=_subredditChannel;
- (_Bool)hasMoreContent;
- (void)fetchMoreData;
- (void)fetchData;
- (void)configureWithChannel:(id)arg1;

@end

