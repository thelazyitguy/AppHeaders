//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FormFill, FormFillViewController;

@protocol FormFillViewControllerDelegate <NSObject>
- (void)formFillViewController:(FormFillViewController *)arg1 editFormFill:(FormFill *)arg2;

@optional
- (void)formFillViewController:(FormFillViewController *)arg1 copyCreditCardNumber:(FormFill *)arg2;
@end
