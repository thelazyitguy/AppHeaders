//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDCInkTouchController, MDCInkView, NSArray, NSIndexPath, QTMCollectionView, UIColor;

@protocol QTMCollectionViewStyleDelegate <NSObject>

@optional
- (void)collectionView:(QTMCollectionView *)arg1 didProcessInkView:(MDCInkView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (MDCInkView *)collectionView:(QTMCollectionView *)arg1 inkTouchController:(MDCInkTouchController *)arg2 inkViewAtIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 inkTouchStyleAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets)collectionView:(QTMCollectionView *)arg1 accessoryInsetsForFooterAtSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(QTMCollectionView *)arg1 accessoryInsetsForHeaderAtSection:(long long)arg2;
- (struct UIEdgeInsets)collectionView:(QTMCollectionView *)arg1 accessoryInsetsAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 accessoryTypeForFooterAtSection:(long long)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 accessoryTypeForHeaderAtSection:(long long)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 accessoryTypeAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)collectionView:(QTMCollectionView *)arg1 innerBackgroundColorForFooterAtSection:(long long)arg2;
- (UIColor *)collectionView:(QTMCollectionView *)arg1 innerBackgroundColorForHeaderAtSection:(long long)arg2;
- (UIColor *)collectionView:(QTMCollectionView *)arg1 innerBackgroundColorAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 cellDividerStyleInsetsForSection:(long long)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 cellDividerStyleForSection:(long long)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 cellStyleForSection:(long long)arg2;
- (void)collectionView:(QTMCollectionView *)arg1 didRemoveInlayFromItemAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(QTMCollectionView *)arg1 didApplyInlayToItemAtIndexPaths:(NSArray *)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 footerStyleForSection:(long long)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 itemStyleAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(QTMCollectionView *)arg1 headerStyleForSection:(long long)arg2;
@end

