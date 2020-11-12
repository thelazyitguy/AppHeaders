//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ServiceCore/SCAppearanceApplicator-Protocol.h>
#import <ServiceCore/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSLayoutConstraint, NSString, SCSChatReachabilityStatusView, SCSMessagingInputViewController, SFCReachability, UICollectionView;

@interface SCSMessagingCollectionViewController : UIViewController <SCAppearanceApplicator, UICollectionViewDelegate>
{
    _Bool _trackingMenuController;
    _Bool _collectionViewScrolling;
    UICollectionView *_collectionView;
    SCSMessagingInputViewController *_inputController;
    NSLayoutConstraint *_inputViewBottom;
    NSIndexPath *_menuControllerIndexPath;
    SFCReachability *_reachability;
    unsigned long long _status;
    SCSChatReachabilityStatusView *_reachabilityStatusView;
    NSLayoutConstraint *_statusLabelTopConstraint;
}

+ (void)applyAppearanceForConfiguration:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *statusLabelTopConstraint; // @synthesize statusLabelTopConstraint=_statusLabelTopConstraint;
@property(retain, nonatomic) SCSChatReachabilityStatusView *reachabilityStatusView; // @synthesize reachabilityStatusView=_reachabilityStatusView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) SFCReachability *reachability; // @synthesize reachability=_reachability;
@property(getter=isCollectionViewScrolling) _Bool collectionViewScrolling; // @synthesize collectionViewScrolling=_collectionViewScrolling;
@property(nonatomic, getter=isTrackingMenuController) _Bool trackingMenuController; // @synthesize trackingMenuController=_trackingMenuController;
@property(retain, nonatomic) NSIndexPath *menuControllerIndexPath; // @synthesize menuControllerIndexPath=_menuControllerIndexPath;
@property(retain, nonatomic) NSLayoutConstraint *inputViewBottom; // @synthesize inputViewBottom=_inputViewBottom;
@property(retain, nonatomic) SCSMessagingInputViewController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)didReceiveMenuWillHideNotification:(id)arg1;
- (void)didReceiveMenuWillShowNotification:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)didEndEditing:(id)arg1;
- (void)didBeginEditing:(id)arg1;
- (void)didChangeText:(id)arg1;
- (void)didPressSendButtonWithText:(id)arg1;
- (void)didEndInputViewEditing;
- (void)didBeginInputViewEditing;
- (void)didChangeInputViewText:(id)arg1;
- (void)didPressSendWithMessageContents:(id)arg1;
- (void)scrollToMessageAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToMostRecentMessage:(_Bool)arg1;
- (void)reachabilityDidChange:(id)arg1;
- (void)setupLayoutConstraints;
- (void)addNotificationCenterObservers;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
