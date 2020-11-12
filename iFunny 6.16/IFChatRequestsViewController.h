//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFChatRequestTableViewCellDelegate-Protocol.h>
#import <Funny/IFChatRequestsModelController-Protocol.h>
#import <Funny/IFNavigationTitleViewDelegate-Protocol.h>
#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class IFChatRequestsModel, IFChatRequestsRouter, NSString, UILabel, UITableView;

@interface IFChatRequestsViewController : UIViewController <IFChatRequestsModelController, IFNavigationTitleViewDelegate, UITableViewDelegate, UITableViewDataSource, IFChatRequestTableViewCellDelegate>
{
    IFChatRequestsModel *_model;
    IFChatRequestsRouter *_router;
    UITableView *_requestsTableView;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UITableView *requestsTableView; // @synthesize requestsTableView=_requestsTableView;
@property(retain, nonatomic) IFChatRequestsRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) IFChatRequestsModel *model; // @synthesize model=_model;
- (void)tapNavigationItem:(id)arg1;
- (void)performUpdateBlock:(CDUnknownBlockType)arg1 deleteBlock:(CDUnknownBlockType)arg2 insertBlock:(CDUnknownBlockType)arg3;
- (void)channelDidRejected:(id)arg1 error:(id)arg2;
- (void)channelDidAccepted:(id)arg1 error:(id)arg2;
- (void)rejectDidTappedForCell:(id)arg1;
- (void)acceptDidTappedForCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (double)topInfoLabelPadding;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
