//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LPSharingModel, NSLayoutConstraint, NSString, Pending, UIActivityIndicatorView, UIButton, UILabel, UITableView;

@interface LPShareOfferViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _busy;
    Pending *_pending;
    NSString *_strAction;
    UILabel *_messageLabel;
    UILabel *_helpfulTipLabel;
    UITableView *_recipientTableView;
    UIButton *_acceptButton;
    UIButton *_rejectButton;
    NSLayoutConstraint *_recipientTableViewHeightConstraint;
    LPSharingModel *_sharingModel;
    NSString *_sharerusername;
    NSString *_sharename;
    NSString *_sharegroup;
    NSString *_shareextra;
    NSString *_folder;
    NSString *_shareType;
    NSString *_shareSubtype;
    UIActivityIndicatorView *_busyView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool busy; // @synthesize busy=_busy;
@property(nonatomic) UIActivityIndicatorView *busyView; // @synthesize busyView=_busyView;
@property(retain, nonatomic) NSString *shareSubtype; // @synthesize shareSubtype=_shareSubtype;
@property(retain, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSString *shareextra; // @synthesize shareextra=_shareextra;
@property(retain, nonatomic) NSString *sharegroup; // @synthesize sharegroup=_sharegroup;
@property(retain, nonatomic) NSString *sharename; // @synthesize sharename=_sharename;
@property(retain, nonatomic) NSString *sharerusername; // @synthesize sharerusername=_sharerusername;
@property(retain, nonatomic) LPSharingModel *sharingModel; // @synthesize sharingModel=_sharingModel;
@property(nonatomic) NSLayoutConstraint *recipientTableViewHeightConstraint; // @synthesize recipientTableViewHeightConstraint=_recipientTableViewHeightConstraint;
@property(nonatomic) UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(nonatomic) UITableView *recipientTableView; // @synthesize recipientTableView=_recipientTableView;
@property(nonatomic) UILabel *helpfulTipLabel; // @synthesize helpfulTipLabel=_helpfulTipLabel;
@property(nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) NSString *strAction; // @synthesize strAction=_strAction;
@property(retain, nonatomic) Pending *pending; // @synthesize pending=_pending;
- (void)removePendingShare;
- (id)message:(id)arg1 parameter:(id)arg2 range:(struct _NSRange *)arg3 parameter:(id)arg4 range:(struct _NSRange *)arg5;
- (void)applySenderMessage;
- (void)rejectNoPrompt;
- (void)acceptNoPrompt;
- (void)reject_clicked:(id)arg1;
- (void)accept_clicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)commonInit_LPShareOfferViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
