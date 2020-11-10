//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL;
@protocol SPTLinkDispatcher;

@interface SPTCanvasPlaylistAction : SPAction
{
    id <SPTLinkDispatcher> _linkDispatcher;
    NSURL *_sourceURL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)execute:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3;

@end

