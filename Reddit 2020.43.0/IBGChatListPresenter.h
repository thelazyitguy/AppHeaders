//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/UISplitViewControllerDelegate-Protocol.h>
#import <Instabug/UITableViewDataSource-Protocol.h>

@class IBGChatListInteractor, NSString;
@protocol IBGChatListView;

@interface IBGChatListPresenter : NSObject <UISplitViewControllerDelegate, UITableViewDataSource>
{
    _Bool _shouldDisplayPrimary;
    _Bool _shouldDismissOnCancel;
    id <IBGChatListView> _view;
    IBGChatListInteractor *_interactor;
}

@property(nonatomic) _Bool shouldDismissOnCancel; // @synthesize shouldDismissOnCancel=_shouldDismissOnCancel;
@property(nonatomic) _Bool shouldDisplayPrimary; // @synthesize shouldDisplayPrimary=_shouldDisplayPrimary;
@property(retain, nonatomic) IBGChatListInteractor *interactor; // @synthesize interactor=_interactor;
@property(nonatomic) __weak id <IBGChatListView> view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)shouldShowNewChatCell;
- (id)chatAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (void)closePressed;
- (void)didSelectChatAtIndexPath:(id)arg1;
- (void)addNewChat;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)scrollToSelectedChat;
- (void)updateUI;
- (void)initalize;
- (id)initWithShouldDisplayPrimary:(_Bool)arg1 shouldDisimssOnCancel:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
