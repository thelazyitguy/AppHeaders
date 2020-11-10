//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, NSString, UICollectionView, UICollectionViewCell, UICollectionViewFlowLayout, UIViewController;
@protocol NFUILolomoItemCellProtocol, NFUILolomoListViewModelProtocol;

@protocol NFUILolomoRowCell
@property(retain, nonatomic) id <NFUILolomoListViewModelProtocol> viewModel;
@property(readonly, nonatomic) __weak UICollectionViewFlowLayout *collectionViewFlowLayout;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
- (UICollectionViewCell<NFUILolomoItemCellProtocol> *)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)itemReuseIdentifier;
- (Class)itemClass;
- (void)configureWithViewModel:(id <NFUILolomoListViewModelProtocol>)arg1;
- (void)viewInitialized:(_Bool)arg1;

@optional
- (void)scrollToItemAtIndex:(long long)arg1;
- (void)rowCellDidDisappearWithLolomo:(_Bool)arg1;
- (void)rowCellWillDisappearWithLolomo:(_Bool)arg1;
- (void)rowCellDidAppearWithLolomo:(_Bool)arg1;
- (void)rowCellWillAppearFrom:(UIViewController *)arg1 withLolomo:(_Bool)arg2;
- (void)rowCellDidEndDisplaying;
- (void)rowCellWillDisplay;
@end

