//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFUIMiniPlayerViewController, NFUIUpdatesEntity, NSNumber, UIView, UIViewController;

@protocol NFUIUpdatesTableViewCellDelegate <NSObject>
- (void)playWithId:(NSNumber *)arg1;

@optional
@property(retain, nonatomic) NFUIMiniPlayerViewController *activeVideoPlayerController;
- (UIView *)accessibilityContainerView;
- (void)presentedImageDidChange:(UIView *)arg1;
- (void)shareItemUsingEntity:(NFUIUpdatesEntity *)arg1;
- (void)exitFullScreenInVideoController:(NFUIMiniPlayerViewController *)arg1 toDestinationView:(UIView *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)enterFullScreenInVideoController:(UIViewController *)arg1;
@end

