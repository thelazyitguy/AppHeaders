//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFChatUserListModelControllerProtocol-Protocol.h>
#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class NSObject, NSString, UITableView, UIView;
@protocol IFChatUserListModelProtocol, IFRouterProtocol, IFViewProtocol;

@interface IFChatUserListViewController : UIViewController <IFChatUserListModelControllerProtocol, UITableViewDelegate, UITableViewDataSource>
{
    id <IFRouterProtocol> router;
    NSObject<IFChatUserListModelProtocol> *_model;
    UITableView *_collocutorsTableView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITableView *collocutorsTableView; // @synthesize collocutorsTableView=_collocutorsTableView;
@property(retain, nonatomic) NSObject<IFChatUserListModelProtocol> *model; // @synthesize model=_model;
@property(retain, nonatomic) id <IFRouterProtocol> router; // @synthesize router;
- (void)hideProgressView;
- (void)loadUsersDataError:(id)arg1;
- (void)didReloadItems;
- (void)itemsDidNotUpdate;
- (void)didAddUserItems:(id)arg1 deleteItems:(id)arg2 updateItems:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)indexPathsByIndexes:(id)arg1;
- (id)indexPathByIndex:(unsigned long long)arg1;
- (_Bool)isNeedNextUsers;
- (void)tryToLoadNextUsersIfNeeded;
@property(readonly, nonatomic) Class contentReusableCellClass;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end

