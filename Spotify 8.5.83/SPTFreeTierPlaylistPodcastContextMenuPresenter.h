//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistContextMenuPresenter-Protocol.h"

@class NSString;
@protocol SPTPodcastContextMenuProvider;

@interface SPTFreeTierPlaylistPodcastContextMenuPresenter : NSObject <SPTFreeTierPlaylistContextMenuPresenter>
{
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
- (_Bool)presentContextMenuForTrackViewModel:(id)arg1 sender:(id)arg2 viewController:(id)arg3;
- (id)initWithContextMenuProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
