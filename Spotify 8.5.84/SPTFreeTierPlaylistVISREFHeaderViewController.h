//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISREFEntityHeaderContentViewController.h"

#import "SPTFreeTierPlaylistHeader-Protocol.h"
#import "SPTFreeTierPlaylistVISREFHeaderControllerDelegate-Protocol.h"

@class NSString, VISREFBaseHeaderController;
@protocol SPTFreeTierPlaylistVISREFHeaderController;

@interface SPTFreeTierPlaylistVISREFHeaderViewController : VISREFEntityHeaderContentViewController <SPTFreeTierPlaylistVISREFHeaderControllerDelegate, SPTFreeTierPlaylistHeader>
{
}

- (void)popViewController;
- (struct CGPoint)snapOffset;
- (void)update;
- (void)setSearchBar:(id)arg1;
- (void)setupLayout;
@property(readonly, nonatomic) VISREFBaseHeaderController<SPTFreeTierPlaylistVISREFHeaderController> *playlistHeaderController;
- (void)headerControllerViewSuperviewHierarchyDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithHeaderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
