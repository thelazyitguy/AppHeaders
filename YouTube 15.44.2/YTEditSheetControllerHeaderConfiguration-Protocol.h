//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, UIView;
@protocol YTEditSheetControllerBarItem, YTEditSheetCustomHeaderView;

@protocol YTEditSheetControllerHeaderConfiguration <NSObject>

@optional
- (double)headerHeight;
- (UIView<YTEditSheetCustomHeaderView> *)headerContentView;
- (id <YTEditSheetControllerBarItem>)tertiaryBarItem;
- (id <YTEditSheetControllerBarItem>)secondaryBarItem;
- (long long)closeStyle;
- (NSString *)title;
@end

