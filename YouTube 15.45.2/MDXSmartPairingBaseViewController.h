//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTSeparatorCollectionViewDelegateFlowLayout-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class NSString, YTCollectionViewController, YTCommandResponderEvent, YTICommand;
@protocol YTResponder;

@interface MDXSmartPairingBaseViewController : YTStyledViewController <YTTopController, YTSeparatorCollectionViewDelegateFlowLayout, YTPageStyleProvider>
{
    NSString *_title;
    YTICommand *_navEndpoint;
    id <YTResponder> _parentResponder;
    YTCollectionViewController *_collectionViewController;
}

+ (id)navEndpointForCellType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) YTCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly, nonatomic) long long pageStyle;
- (void)didPressBack;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct SeparatorAttributes)collectionView:(id)arg1 layout:(id)arg2 separatorAttributesAtSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 itemIsHiddenAtIndexPath:(id)arg3;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (id)initWithTitle:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end
