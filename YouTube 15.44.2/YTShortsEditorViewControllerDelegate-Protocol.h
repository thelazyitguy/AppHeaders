//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTICommand, YTShortsEditorViewController, YTShortsUploadModel;

@protocol YTShortsEditorViewControllerDelegate <NSObject>
- (void)editorViewController:(YTShortsEditorViewController *)arg1 continueToUploadWithModel:(YTShortsUploadModel *)arg2 navigationCommand:(YTICommand *)arg3;
- (void)editorViewController:(YTShortsEditorViewController *)arg1 dismissWithNavigationCommand:(YTICommand *)arg2;
@end
