//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CLTokenInputView, UIButton, UITableView;

@interface _TtC8LastPass43LPSharing_InviteUsersToFolderViewController : UIViewController
{
    // Error parsing type: , name: alreadyAddedSharees
    // Error parsing type: , name: onSuccess
    // Error parsing type: , name: folder
    // Error parsing type: , name: allowAddingExternalEmails
    // Error parsing type: , name: tokenInputView
    // Error parsing type: , name: permissionsButton
    // Error parsing type: , name: candidatesTableView
    // Error parsing type: , name: messageCenter
    // Error parsing type: , name: allInviteeCandidates
    // Error parsing type: , name: displayedInviteeCandidates
    // Error parsing type: , name: searchString
    // Error parsing type: , name: permissionLevel
    // Error parsing type: , name: executingUpdate
    // Error parsing type: , name: previousTableViewTop
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onPermissionsButtonTapped;
- (void)onUpdateButtonTapped;
@property(nonatomic, retain) UITableView *candidatesTableView; // @synthesize candidatesTableView;
@property(nonatomic, retain) UIButton *permissionsButton; // @synthesize permissionsButton;
@property(nonatomic, retain) CLTokenInputView *tokenInputView; // @synthesize tokenInputView;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
