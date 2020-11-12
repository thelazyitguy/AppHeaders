//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBSnackbarAction, MDCSnackbarMessage, NSString, OGLAccountMenuDependencies, OGLAccountSnackbarParams, UIView;
@protocol HUBSnackbarManagerDelegate, OGLAccountMenuDelegate, OGLMultipleAccountMenuDelegate;

@protocol HUBSnackbarManager <NSObject>
- (void)setPresentationHostView:(UIView *)arg1;
- (void)setNeedsUpdateSnackbarOffset;
- (void)unregisterDelegate:(id <HUBSnackbarManagerDelegate>)arg1;
- (void)registerDelegate:(id <HUBSnackbarManagerDelegate>)arg1;
- (void)dismissAndCallCompletionBlocksWithCategory:(long long)arg1;
- (void)dismissAndCallCompletionBlocksWithCategoryString:(NSString *)arg1;
- (void)showMessage:(MDCSnackbarMessage *)arg1 completion:(void (^)(void))arg2;
- (MDCSnackbarMessage *)showSnackbarForMessage:(NSString *)arg1 category:(long long)arg2 completion:(void (^)(void))arg3;
- (MDCSnackbarMessage *)showSnackbarForMessage:(NSString *)arg1 category:(long long)arg2;
- (MDCSnackbarMessage *)showSnackbarForMessage:(NSString *)arg1 accessibilityLabel:(NSString *)arg2 category:(long long)arg3;
- (MDCSnackbarMessage *)showSnackbarForMessage:(NSString *)arg1 accessibilityLabel:(NSString *)arg2 duration:(double)arg3 category:(long long)arg4 completion:(void (^)(void))arg5;
- (MDCSnackbarMessage *)showSnackbarForMessage:(NSString *)arg1 accessibilityLabel:(NSString *)arg2 duration:(double)arg3 category:(long long)arg4 action:(HUBSnackbarAction *)arg5 completion:(void (^)(void))arg6;
- (MDCSnackbarMessage *)showSnackbarForMessage:(NSString *)arg1 accessibilityLabel:(NSString *)arg2 duration:(double)arg3 category:(long long)arg4 action:(HUBSnackbarAction *)arg5 announce:(_Bool)arg6 completion:(void (^)(void))arg7;
- (void)showAccountSnackbarWithParams:(OGLAccountSnackbarParams *)arg1 duration:(double)arg2 category:(NSString *)arg3 accountMenuDependencies:(OGLAccountMenuDependencies *)arg4 accountMenuDelegate:(id <OGLAccountMenuDelegate>)arg5 multipleAccountMenuDelegate:(id <OGLMultipleAccountMenuDelegate>)arg6;
@property(nonatomic, readonly) double messageHeight;
@property(nonatomic, readonly) _Bool isShowingMessage;
@end
