//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/UIScrollViewDelegate-Protocol.h>

@class GMSx_NIPagingScrollView;

@protocol NIPagingScrollViewDelegate <UIScrollViewDelegate>

@optional
- (void)pagingScrollViewDidChangePages:(GMSx_NIPagingScrollView *)arg1;
- (void)pagingScrollViewWillChangePages:(GMSx_NIPagingScrollView *)arg1;
- (void)pagingScrollViewDidScroll:(GMSx_NIPagingScrollView *)arg1;
@end
