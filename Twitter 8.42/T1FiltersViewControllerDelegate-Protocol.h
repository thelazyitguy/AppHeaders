//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1FiltersViewController, TFNTwitterMediaAssetImage;

@protocol T1FiltersViewControllerDelegate <NSObject>
- (void)filtersViewControllerDidCancel:(T1FiltersViewController *)arg1;
- (void)filtersViewController:(T1FiltersViewController *)arg1 didEditImage:(TFNTwitterMediaAssetImage *)arg2;

@optional
- (NSString *)scribeSectionForFiltersViewController:(T1FiltersViewController *)arg1;
@end

