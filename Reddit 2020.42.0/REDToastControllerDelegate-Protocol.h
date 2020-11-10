//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSUUID, RUIToastConfiguration, RUIToastController, UIView;

@protocol REDToastControllerDelegate <NSObject>
- (UIView *)toastController:(RUIToastController *)arg1 parentViewForToastConfiguration:(RUIToastConfiguration *)arg2;

@optional
- (void)toastController:(RUIToastController *)arg1 cancelFetchOperationForToken:(NSUUID *)arg2;
- (void)toastController:(RUIToastController *)arg1 fetchIconForConfiguration:(RUIToastConfiguration *)arg2 completion:(void (^)(UIImage *, NSError *))arg3 token:(void (^)(NSUUID *))arg4;
- (double)toastController:(RUIToastController *)arg1 keyboardPaddingForConfiguration:(RUIToastConfiguration *)arg2;
- (struct UIEdgeInsets)toastController:(RUIToastController *)arg1 layoutMarginsForToastConfiguration:(RUIToastConfiguration *)arg2;
@end
