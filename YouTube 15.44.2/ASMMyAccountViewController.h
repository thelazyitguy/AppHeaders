//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/QTMCollectionViewController.h>

#import <Module_Framework/ASMHeaderDelegate-Protocol.h>
#import <Module_Framework/ASMPromoItemContentViewDelegate-Protocol.h>
#import <Module_Framework/GOOFlexibleHeaderParentViewController-Protocol.h>
#import <Module_Framework/QTMCollectionViewStyleDelegate-Protocol.h>
#import <Module_Framework/UICollectionViewDelegate-Protocol.h>

@class ASMHeader, ASMScreenContext, GOOFlexibleHeaderViewController, NSString;

@interface ASMMyAccountViewController : QTMCollectionViewController <UICollectionViewDelegate, ASMPromoItemContentViewDelegate, QTMCollectionViewStyleDelegate, GOOFlexibleHeaderParentViewController, ASMHeaderDelegate>
{
    ASMScreenContext *_context;
    ASMHeader *_header;
    _Bool _showsCancelButton;
    CDUnknownBlockType _removeAccountCallback;
    CDUnknownBlockType _singleAppSignOutCallback;
    GOOFlexibleHeaderViewController *_headerViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleInsetsForSection:(long long)arg2;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTapButtonForPromo:(id)arg1;
- (void)header:(id)arg1 didTapCancelButton:(id)arg2;
- (void)header:(id)arg1 didTapBackButton:(id)arg2;
- (_Bool)accessibilityPerformEscape;
- (void)profileDidUpdateNotification:(id)arg1;
- (void)returnedFromBrowserNotification:(id)arg1;
- (void)close;
- (id)makeFooterObject;
- (void)performFooterActionFromObject:(id)arg1;
- (void)openScreenFromObject:(id)arg1;
- (void)updateContent;
- (void)applicationDidBecomeActive;
- (void)setUpHeader;
- (void)setDynamicSpaceObjectHeight;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 showsCancelButton:(_Bool)arg2 removeAccountCallback:(CDUnknownBlockType)arg3 singleAppSignOutCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

