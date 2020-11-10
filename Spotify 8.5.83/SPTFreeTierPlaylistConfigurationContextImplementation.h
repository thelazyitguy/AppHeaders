//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistConfigurationContext-Protocol.h"

@class NSDictionary, NSString, NSURL, SPTPageCreationContext;

@interface SPTFreeTierPlaylistConfigurationContextImplementation : NSObject <SPTFreeTierPlaylistConfigurationContext>
{
    NSDictionary *_formatListAttributes;
    NSString *_formatListType;
    SPTPageCreationContext *_pageContext;
    NSURL *_playlistURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) SPTPageCreationContext *pageContext; // @synthesize pageContext=_pageContext;
@property(readonly, copy, nonatomic) NSString *formatListType; // @synthesize formatListType=_formatListType;
@property(readonly, copy, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
- (id)initWithPlaylistURL:(id)arg1 pageContext:(id)arg2 formatListType:(id)arg3 formatListAttributes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

