//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezEquivalentsPickerViewController, A9VSFezProduct;

@protocol A9VSFezEquivalentsPickerViewControllerDelegate <NSObject>
- (void)equivalentsPickerViewController:(A9VSFezEquivalentsPickerViewController *)arg1 didChangeEquivalentsLayout:(unsigned long long)arg2;
- (void)equivalentsPickerViewController:(A9VSFezEquivalentsPickerViewController *)arg1 didSelectEquivalentProduct:(A9VSFezProduct *)arg2 previousProduct:(A9VSFezProduct *)arg3;
@end
