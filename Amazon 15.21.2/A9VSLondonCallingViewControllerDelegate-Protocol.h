//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString;

@protocol A9VSLondonCallingViewControllerDelegate <NSObject>
- (void)didSelectItemWithNoImageAtPath:(NSIndexPath *)arg1;
- (void)didSelectImageItemAtPath:(NSIndexPath *)arg1;
- (long long)numberOfItemsToDisplay;
- (NSString *)displayTitleAtIndexPath:(NSIndexPath *)arg1;
- (void)fetchItemAtIndexPath:(NSIndexPath *)arg1 completion:(void (^)(_Bool, UIImage *))arg2;
@end

