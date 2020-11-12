//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezProduct, A9VSFezProductPickerDrawerViewController, A9VSFezProductVariant, NSString;

@protocol A9VSFezProductPickerDrawerViewControllerDelegate <NSObject>
- (void)productPickerDrawerViewController:(A9VSFezProductPickerDrawerViewController *)arg1 didSelectEquivalentProduct:(A9VSFezProduct *)arg2 previousProduct:(A9VSFezProduct *)arg3;
- (void)productPickerDrawerViewController:(A9VSFezProductPickerDrawerViewController *)arg1 didTapDetailsButtonForProduct:(A9VSFezProduct *)arg2;
- (void)productPickerDrawerViewController:(A9VSFezProductPickerDrawerViewController *)arg1 didPickProductVariant:(A9VSFezProductVariant *)arg2 previousProductVariant:(A9VSFezProductVariant *)arg3;

@optional
- (void)productPickerDrawerViewController:(A9VSFezProductPickerDrawerViewController *)arg1 didAddToCartFailedForASIN:(NSString *)arg2;
- (void)productPickerDrawerViewController:(A9VSFezProductPickerDrawerViewController *)arg1 didAddToCartSucceedForASIN:(NSString *)arg2;
- (void)productPickerDrawerViewController:(A9VSFezProductPickerDrawerViewController *)arg1 didTapAddToCartButtonForASIN:(NSString *)arg2;
@end
