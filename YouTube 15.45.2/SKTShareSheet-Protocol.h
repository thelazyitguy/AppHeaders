//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/SKTPeoplePicker-Protocol.h>

@class UIViewController;
@protocol SKTShareSheetDelegate;

@protocol SKTShareSheet <SKTPeoplePicker>
@property(nonatomic) __weak id <SKTShareSheetDelegate> shareSheetDelegate;
- (void)dismissFromPresentingViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end
