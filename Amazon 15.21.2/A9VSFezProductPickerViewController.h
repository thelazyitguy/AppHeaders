//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "A9VSFezEquivalentsPickerViewControllerDelegate-Protocol.h"
#import "A9VSFezProductInformationCellDelegate-Protocol.h"
#import "A9VSFezProductVariantPickerDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class A9VSFezEquivalentsPickerViewController, A9VSFezProduct, A9VSFezProductEquivalentManager, A9VSFezProductManager, A9VSFezProductVariantCollection, A9VSFezProductVariantPicker, NSArray, NSString, UIScrollView;
@protocol A9VSFezProductPickerViewControllerDelegate;

@interface A9VSFezProductPickerViewController : UICollectionViewController <A9VSFezEquivalentsPickerViewControllerDelegate, A9VSFezProductInformationCellDelegate, A9VSFezProductVariantPickerDelegate, UICollectionViewDelegateFlowLayout>
{
    id <A9VSFezProductPickerViewControllerDelegate> _delegate;
    A9VSFezProduct *_displayedProduct;
    NSString *_pickedASIN;
    NSArray *_components;
    unsigned long long _productInformationCellHeight;
    A9VSFezProductManager *_productManager;
    A9VSFezProductEquivalentManager *_productEquivalentManager;
    A9VSFezProductVariantCollection *_productVariantCollection;
    NSArray *_productEquivalents;
    A9VSFezProductVariantPicker *_productVariantPicker;
    A9VSFezEquivalentsPickerViewController *_equivalentsViewController;
    NSString *_sessionType;
}

@property(readonly, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) A9VSFezEquivalentsPickerViewController *equivalentsViewController; // @synthesize equivalentsViewController=_equivalentsViewController;
@property(retain, nonatomic) A9VSFezProductVariantPicker *productVariantPicker; // @synthesize productVariantPicker=_productVariantPicker;
@property(retain, nonatomic) NSArray *productEquivalents; // @synthesize productEquivalents=_productEquivalents;
@property(retain, nonatomic) A9VSFezProductVariantCollection *productVariantCollection; // @synthesize productVariantCollection=_productVariantCollection;
@property(readonly, nonatomic) __weak A9VSFezProductEquivalentManager *productEquivalentManager; // @synthesize productEquivalentManager=_productEquivalentManager;
@property(readonly, nonatomic) __weak A9VSFezProductManager *productManager; // @synthesize productManager=_productManager;
@property(nonatomic) unsigned long long productInformationCellHeight; // @synthesize productInformationCellHeight=_productInformationCellHeight;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
@property(retain, nonatomic) NSString *pickedASIN; // @synthesize pickedASIN=_pickedASIN;
@property(retain, nonatomic) A9VSFezProduct *displayedProduct; // @synthesize displayedProduct=_displayedProduct;
@property(nonatomic) __weak id <A9VSFezProductPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)equivalentsPickerViewController:(id)arg1 didChangeEquivalentsLayout:(unsigned long long)arg2;
- (void)equivalentsPickerViewController:(id)arg1 didSelectEquivalentProduct:(id)arg2 previousProduct:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)productVariantPicker:(id)arg1 didPickProductVariant:(id)arg2 previousProductVariant:(id)arg3;
- (void)didAddToCartFailedForASIN:(id)arg1;
- (void)didAddToCartSucceedForASIN:(id)arg1;
- (void)didTapAddToCartButtonForASIN:(id)arg1;
- (void)didTapProductInformationCellDetailsButton:(id)arg1;
- (long long)componentAtIndex:(unsigned long long)arg1;
- (double)variantsComponentHeight;
- (double)minimumVisibleHeightForComponent:(long long)arg1;
- (_Bool)canDisplayEquivalentsComponent;
- (_Bool)canDisplayVariantsComponent;
- (void)reloadComponent:(long long)arg1;
- (_Bool)canDisplayComponent:(long long)arg1;
- (_Bool)containsComponent:(long long)arg1;
- (void)updateEquivalentsComponentForASIN:(id)arg1 withProductEquivalents:(id)arg2;
- (void)updateVariantsComponentForASIN:(id)arg1 withProductVariantCollection:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithProductManager:(id)arg1 productEquivalentManager:(id)arg2 displayedProduct:(id)arg3 components:(id)arg4 sessionType:(id)arg5;
- (void)updateProductInformationCellHeight;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) UIScrollView *scrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
