//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ComposeTagLocationViewController, TFSTwitterPlace;

@protocol T1ComposeTagLocationViewControllerDelegate <NSObject>

@optional
- (void)composeTagLocationViewController:(T1ComposeTagLocationViewController *)arg1 didTapButtonWithPlace:(TFSTwitterPlace *)arg2 index:(unsigned long long)arg3;
- (void)composeTagLocationViewControllerDidTapSearchButton:(T1ComposeTagLocationViewController *)arg1;
- (void)composeTagLocationViewControllerDidTapGeoButton:(T1ComposeTagLocationViewController *)arg1;
@end

