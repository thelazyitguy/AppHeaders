//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ListingNetworkSourceDelegate-Protocol.h"

@interface _TtC6RedditP33_451CB9FD39E0DBFE1715517B047E071628CommentsNetworkSourceWrapper : NSObject <ListingNetworkSourceDelegate>
{
    // Error parsing type: , name: commentNetworkSource
    // Error parsing type: , name: didFetchDataCallback
    // Error parsing type: , name: didFetchMoreDataCallback
    // Error parsing type: , name: didFailCallback
}

- (void).cxx_destruct;
- (id)init;
- (void)listingNetworkSourceDidFail:(id)arg1;
- (void)listingNetworkSourceDidFetchMoreData:(id)arg1;
- (void)listingNetworkSourceDidFetchData:(id)arg1 correlationID:(id)arg2;

@end

