//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL;
@protocol SPTLinkDispatcher;

@interface SPTPodcastMixManageShowsAction : SPAction
{
    NSString *_title;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSURL *_sourceURL;
    long long _ctaIcon;
}

- (void).cxx_destruct;
@property(nonatomic) long long ctaIcon; // @synthesize ctaIcon=_ctaIcon;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (id)title;
- (id)execute:(id)arg1;
- (_Bool)isEnabled;
- (id)logEntityURL;
- (id)logEventName;
- (long long)icon;
- (id)initWithLogContext:(id)arg1 linkDispacther:(id)arg2 sourceURL:(id)arg3 ctaIcon:(long long)arg4;

@end
