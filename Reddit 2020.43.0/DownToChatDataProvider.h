//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataProvider-Protocol.h"

@class DownToChatBanner, NSString, RedditService, Subreddit;
@protocol AccountContext;

@interface DownToChatDataProvider : NSObject <DataProvider>
{
    id <AccountContext> _accountContext;
    Subreddit *_subreddit;
    DownToChatBanner *_downToChatBanner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DownToChatBanner *downToChatBanner; // @synthesize downToChatBanner=_downToChatBanner;
@property(readonly, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (void)invalidate;
- (id)processObjects:(id)arg1 currentCount:(long long)arg2;
- (void)fetchFromCurrentObjects:(id)arg1 fetchingMore:(_Bool)arg2 pageSize:(long long)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

